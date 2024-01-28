workspace "OpenGL"
  configurations {"Debug", "Release"}
  language "C++"
  targetdir "bin/%{cfg.buildcfg}"
  location "build"
  outputdir= "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
  include "dep/GLFW"

  filter "configurations:Debug"
    defines { "DEBUG" }
    symbols "On"

  filter "configurations:Release"
    defines { "RELEASE" }
    optimize "On"
  
  project "OpenGLlib"
    kind "SharedLib"
    location "build"
    includedirs
    {
      "dep/GLFW",
      "dep/glad",
      "dep/glm",
      "dep/spdlog",
      "dep/include"
    }
    links
    {
      "GLFW",
      "Glad",
      "GLFW", 
      "opengl32",
       "shell32", 
       "gdi32"
    }

  project "OpenGLRuntime"
    kind "ConsoleApp"
    location "build"
    files { "main.cpp"}
    links { "OpenGLlib", }
    includedirs { "dep/include/"}
    