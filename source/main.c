#include <switch.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    consoleInit(NULL);

    printf("================================\n");
    printf("       ROBLOX SWITCH\n");
    printf("       Native Prototype\n");
    printf("================================\n\n");

    printf("Project initialized successfully.\n\n");
    printf("Target: Nintendo Switch\n");
    printf("Architecture: ARM64\n");
    printf("Platform: Atmosphere / libnx\n\n");

    printf("Press PLUS to exit.\n");

    while (appletMainLoop())
    {
        hidScanInput();

        u64 keys = hidKeysDown(CONTROLLER_P1_AUTO);

        if (keys & KEY_PLUS)
            break;

        consoleUpdate(NULL);
    }

    consoleExit(NULL);
    return 0;
}
