#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F6764(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F6764;

loc_801F6764:
{
    MemoryInline::FlatWriteRam32((r1 + -1280), r1);
    r1 = (r1 + -1280);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1284), r0);
    r0 = 0;
    r5 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 1276), r31);
    MemoryInline::FlatWriteRam32((r1 + 1272), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 1268), r29);
    r29 = r3;
    r3 = r4;
    r4 = (r1 + 44);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x801F679Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802035A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F67A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F67A8;
    }
}

loc_801F67A4:
{
    goto loc_801F6B24;
}

loc_801F67A8:
{
    r4 = r29;
    r3 = (r1 + 112);
    r5 = (r1 + 44);
    ctx->lr = 0x801F67B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F769Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F67BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F67C4;
    }
}

loc_801F67C0:
{
    goto loc_801F6B24;
}

loc_801F67C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801F67C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F67D4;
    }
}

loc_801F67CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 676));
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_801F67D4:
{
    r5 = r29;
    r3 = (r1 + 56);
    r4 = (r1 + 24);
    r6 = (r1 + 676);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FD6A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = (r1 + 56);
    r4 = (r1 + 688);
    r6 = (r1 + 32);
    r5 = 0;
    r7 = 119;
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x801F6808u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F7738u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F680C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6818;
    }
}

loc_801F6810:
{
    r3 = 8;
    goto loc_801F6B24;
}

loc_801F6818:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_801F681C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6824;
    }
}

loc_801F6820:
{
    goto loc_801F6B24;
}

loc_801F6824:
{
    r3 = (r1 + 32);
    r4 = 1;
    ctx->lr = 0x801F6830u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF9BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(255));
}

loc_801F6838:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801F684C;
    }
}

loc_801F683C:
{
    r0 = MemoryInline::FlatRead32((r1 + 672));
    r0 = (r3 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(259));
}

loc_801F6848:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801F6854;
    }
}

loc_801F684C:
{
    r3 = 2;
    goto loc_801F6B24;
}

loc_801F6854:
{
    r8 = r29;
    r3 = (r1 + 688);
    r4 = (r1 + 32);
    r7 = (r1 + 112);
    r5 = 16;
    r6 = 1;
    ctx->lr = 0x801F6870u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F8348u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F6874:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6B20;
    }
}

loc_801F687C:
{
    r5 = r29;
    r3 = (r1 + 56);
    r4 = (r1 + 24);
    r6 = (r1 + 676);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FD6A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead8((r1 + 1210));
    r3 = (r1 + 688);
    r5 = (r1 + 56);
    r6 = (r1 + 16);
    r0 = (r4 + 1);
    r9 = (r1 + 12);
    r4 = (r0 & 255);
    r7 = 0;
    r8 = 119;
    ctx->lr = 0x801F68B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F78C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F68BC:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6B20;
    }
}

loc_801F68C4:
{
    r0 = 0;
    r5 = r29;
    MemoryInline::FlatWriteRam32((r1 + 1252), r0);
    r3 = (r1 + 56);
    r4 = (r1 + 24);
    r6 = (r1 + 1252);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FD6A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = (r1 + 56);
    r6 = (r1 + 8);
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x801F68F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC29Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r31 = r3;
    r0 = (r4 + 65536);
}

loc_801F6904:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801F690C;
    }
}

loc_801F6908:
{
    r31 = 6;
}

loc_801F690C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801F6910:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6B20;
    }
}

loc_801F6914:
{
    r5 = MemoryInline::FlatRead8((r29 + 6));
    r3 = r29;
    r7 = (r1 + 688);
    r8 = (r1 + 112);
    r6 = 1;
    ctx->lr = 0x801F692Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F8580u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801F6930:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801F6988;
    }
}

loc_801F6938:
{
    r0 = MemoryInline::FlatRead16((r1 + 688));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F6940:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6974;
    }
}

loc_801F6944:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801F6958:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6974;
    }
}

loc_801F695C:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r1 + 1214);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80204E3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r3 = (r1 + 688);
    ctx->lr = 0x801F6970u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F71ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam8((r1 + 1212), static_cast<uint8_t>(r3));
}

loc_801F6974:
{
    r3 = (r1 + 688);
    r4 = (r1 + 16);
    r5 = 0;
    ctx->lr = 0x801F6984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F7E20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
}

loc_801F6988:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801F698C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F69A8;
    }
}

loc_801F6990:
{
    r4 = MemoryInline::FlatRead32((r1 + 1252));
    r3 = (r1 + 56);
    r5 = -1;
    r6 = -1;
    ctx->lr = 0x801F69A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801F6B20;
}

loc_801F69A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801F69AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6B20;
    }
}

loc_801F69B0:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 557u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 8), r29);
    r3 = (r1 + 32);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 4), r0);
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 1232u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 12));
    r0 = (r4 + 1);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 16), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1198u, (r1 + 1210));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r30 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1216u, (r1 + 1228));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r30 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 1224u, (r1 + 1236));
    MemoryInline::WriteResolved16(guest_range_0, 548u, (r30 + 548), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 1226u, (r1 + 1238));
    MemoryInline::WriteResolved16(guest_range_0, 550u, (r30 + 550), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 1228u, (r1 + 1240));
    MemoryInline::WriteResolved32(guest_range_0, 552u, (r30 + 552), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1216u, (r1 + 1228));
    MemoryInline::WriteResolved8(guest_range_0, 556u, (r30 + 556), static_cast<uint8_t>(r0));
    // inline leaf 0x801EF7FC (2 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 8));
    // end of inlined leaf 0x801EF7FC
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_801F6A08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6A2C;
    }
}

loc_801F6A0C:
{
    r3 = (r30 + 28);
    r5 = (r1 + 32);
    r4 = 0;
    ctx->lr = 0x801F6A1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802047F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_801F6A48;
}

loc_801F6A2C:
{
    r3 = (r30 + 28);
    r4 = (r30 + 1092);
    r5 = (r1 + 32);
    ctx->lr = 0x801F6A3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802047F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_801F6A48:
{
    r3 = (r30 + 557);
    r4 = (r1 + 1214);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF618u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801F6A60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6A70;
    }
}

loc_801F6A64:
{
    r3 = (r30 + 1612);
    r4 = (r30 + 557);
    ctx->lr = 0x801F6A70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80203E08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801F6A70:
{
    r0 = MemoryInline::FlatRead16((r1 + 688));
}

loc_801F6A78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F6AA4;
    }
}

loc_801F6A7C:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = 0;
    MemoryInline::FlatWrite8((r30 + 25), static_cast<uint8_t>(r3));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801F6A90:
{
    MemoryInline::FlatWrite8((r30 + 26), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 570), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6B20;
    }
}

loc_801F6A9C:
{
    MemoryInline::FlatWrite16((r30 + 1638), static_cast<uint16_t>(r3));
    goto loc_801F6B20;
}

loc_801F6AA4:
{
    r0 = 1;
    r29 = 0x80360000u;
    MemoryInline::FlatWrite8((r30 + 25), static_cast<uint8_t>(r0));
    r29 = (r29 + -20912);
    r0 = MemoryInline::FlatRead8((r1 + 1212));
    MemoryInline::FlatWrite8((r30 + 26), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 60));
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801F6AC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6AF8;
    }
}

loc_801F6ACC:
{
    r0 = (r3 & -4);
    r3 = (r30 + 570);
    r0 = (r0 | 1);
    r4 = (r1 + 688);
    MemoryInline::FlatWriteRam32((r29 + 60), r0);
    ctx->lr = 0x801F6AE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80203CDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 60));
    r0 = (r0 & -4);
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam32((r29 + 60), r0);
    goto loc_801F6B04;
}

loc_801F6AF8:
{
    r3 = (r30 + 570);
    r4 = (r1 + 688);
    ctx->lr = 0x801F6B04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80203CDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801F6B04:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801F6B10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6B20;
    }
}

loc_801F6B14:
{
    r3 = (r30 + 1638);
    r4 = (r1 + 688);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EFD4Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_801F6B20:
{
    r3 = r31;
}

loc_801F6B24:
{
    r0 = MemoryInline::FlatRead32((r1 + 1284));
    r31 = MemoryInline::FlatRead32((r1 + 1276));
    r30 = MemoryInline::FlatRead32((r1 + 1272));
    r29 = MemoryInline::FlatRead32((r1 + 1268));
    ctx->lr = r0;
    r1 = (r1 + 1280);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F6764 func_801F6764 preserves=true fpr_mask=0x00000000
