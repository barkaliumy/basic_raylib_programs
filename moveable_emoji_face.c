#include <raylib.h>
int main() {
    int ycx=400, ycy=400;
    int wlcx=350, wlcy=350, wrcx=450, wrcy=350;
    int blcx=350, blcy=350, brcx=450, brcy=350;
    int bmcx=400, bmcy=490, rmcx=400, rmcy=500;
    int plcx=350, plcy=400, prcx=450, prcy=400;
    InitWindow(800, 800,"Emoji");
    SetTargetFPS(60);
    while(WindowShouldClose()==false) {

        if(IsKeyDown(KEY_RIGHT)) {
            ycx+=3;
            wlcx+=3;
            wrcx+=3;
            blcx+=3;
            brcx+=3;
            bmcx+=3;
            rmcx+=3;
            plcx+=3;
            prcx+=3;
        }
        else if(IsKeyDown(KEY_LEFT)) {
            ycx-=3;
            wlcx-=3;
            wrcx-=3;
            blcx-=3;
            brcx-=3;
            bmcx-=3;
            rmcx-=3;
            plcx-=3;
            prcx-=3;
        }
        else if(IsKeyDown(KEY_DOWN)) {
            ycy+=3;
            wlcy+=3;
            wrcy+=3;
            blcy+=3;
            brcy+=3;
            bmcy+=3;
            rmcy+=3;
            plcy+=3;
            prcy+=3;
        }
        else if(IsKeyDown(KEY_UP)) {
            ycy-=3;
            wlcy-=3;
            wrcy-=3;
            blcy-=3;
            brcy-=3;
            bmcy-=3;
            rmcy-=3;
            plcy-=3;
            prcy-=3;
        }

        BeginDrawing();
        ClearBackground(WHITE);

        DrawCircle(ycx, ycy, 100, YELLOW); //for yellow circle.
        DrawCircleLines(ycx, ycy, 100, BLACK);
        DrawCircle(wlcx, wlcy, 30, WHITE); //for left white circle.
        DrawCircleLines(wlcx, wlcy, 30, BLACK);
        DrawCircle(wrcx, wrcy, 30, WHITE); //for right white circle.
        DrawCircleLines(wrcx, wrcy, 30, BLACK);
        DrawCircle(blcx, blcy, 10, BLACK); //for left black circle.
        DrawCircle(brcx, brcy, 10, BLACK); //for right black circle.
        DrawCircle(bmcx, bmcy, 30, BLACK); //for mouth black circle.
        DrawCircle(rmcx, rmcy, 20, RED); //for red circle.
        DrawEllipse(plcx, plcy, 25, 10, PINK); //for left pink circle.
        DrawEllipseLines(plcx, plcy, 25, 10, BLACK);
        DrawEllipse(prcx, prcy, 25, 10, PINK); //for right pink circle.
        DrawEllipseLines(prcx, prcy, 25, 10, BLACK);
        EndDrawing();
    }
    return 0;
}
