workspace "lib"
    configurations {
        "Debug", "Release", "Distribution"
    }
outputdir= "%{cfg.build}-%{cfg.system}-%{cfg.architecture}"
project "Project1"
    kind "SharedLib"
    language "C++"
    location "Project1"
    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("build/" .. outputdir .. "/%{prj.name}")
    filter "configurations:Debug"
        defines {"DEBUG"}
        symbols "On"
        files{
            "**.h", "**.cpp"
        }

    filter "configurations:Release"
        defines {"NDEBUG"}
        optimize "On"
        files{
            "**.h", "**.cpp"
        }

    filter "configurations:Debug"
        defines {"NDEBUG"}
        optimize "On"
        files{
             "**.cpp"
        }
project "Project2"
    kind "ConsoleApp"
    links "Project1"
    language "C++"
    location "Project2"
    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("build/" .. outputdir .. "/%{prj.name}")
    filter "configurations:Debug"
        defines {"DEBUG"}
        symbols "On"
        files{
            "**.h", "**.cpp"
        }

    filter "configurations:Release"
        defines {"NDEBUG"}
        optimize "On"
        files{
            "**.h", "**.cpp"
        }

    filter "configurations:Debug"
        defines {"NDEBUG"}
        optimize "On"
        files{
             "**.cpp"
        }
        