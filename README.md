rundll32_sampe
==============

sample of dll ran by rundll32.exe my be used for fake dll if some dll will be missing

Usage
--------------

If rundll32.exe try load some dll which is missing in system you can create fake dll based on this sample.

1) replace name of solution and project to dll name which is missing
2) in module.def change kbdusm to name of missing dll
3) compile release and put dll to the directory where original dll should be
4) reboot system, rundll32 should tell you what entry point is missing in dll
5) copy name of entry point and replace TJKAHMZL to name of entry point in module.def and dllmain.cpp
6) repeat point 3
7) no more missing dll :)