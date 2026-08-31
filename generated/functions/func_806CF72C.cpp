#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CF72C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CF72C;

loc_806CF72C:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    r0 = 0;
    r5 = (r1 + 72);
    MemoryInline::FlatWriteRam32((r1 + 268), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + -808);
    MemoryInline::FlatWriteRam32((r1 + 264), r30);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r30 + 48);
    MemoryInline::FlatWriteRam32((r1 + 260), r29);
    r29 = 0x808C0000u;
    r29 = (r29 + 18952);
    MemoryInline::FlatWrite8((r3 + 304), static_cast<uint8_t>(r0));
    r3 = (r1 + 60);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 60));
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 224), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = 0x809C0000u;
    r5 = 0x809C0000u;
    r6 = -352780288;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r4 = (r1 + 60);
    r5 = (r5 + 15364);
    r6 = (r6 + -16897);
    r7 = (r1 + 136);
    r8 = (r1 + 8);
    r9 = 0;
    ctx->lr = 0x806CF7D4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F500u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806CF7D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806CFA64;
    }
}

loc_806CF7DC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 304), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 208));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CF7F0:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
}

loc_806CF7F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806CF814;
    }
}

loc_806CF7FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    MemoryInline::FlatWriteFloat32((r30 + 280), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 176));
    MemoryInline::FlatWriteFloat32((r30 + 284), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 180));
    MemoryInline::FlatWriteFloat32((r30 + 288), f0.d);
}

loc_806CF814:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 60));
    r0 = MemoryInline::FlatRead16((r30 + 44));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 48));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 280));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 288));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 48), f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 & 8192);
}

loc_806CF88C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CF90C;
    }
}

loc_806CF890:
{
    r0 = MemoryInline::FlatRead32((r30 + 308));
}

loc_806CF898:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806CF90C;
    }
}

loc_806CF89C:
{
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r1 + 48);
    r4 = MemoryInline::FlatRead16((r5 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r5 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & -16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r5 + r4);
    r5 = (r5 + r0);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r30 + 268), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 308));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r30 + 272), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806CF8DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 276), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CFA64;
    }
}

loc_806CF8E8:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 80));
    ctx->lr = 0x806CF900u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805573CCu>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 308), r0);
    goto loc_806CFA64;
}

loc_806CF90C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 304), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead16((r4 + 72));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r3 = (r3_rot_1 & -16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r4 = (r5 + r3);
    r3 = (r5 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CF940:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806CF96C;
    }
}

loc_806CF944:
{
    r3 = (r1 + 36);
    r5 = (r30 + 220);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r30 + 268), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r30 + 272), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r30 + 276), f0.d);
    goto loc_806CF994;
}

loc_806CF96C:
{
    r4 = r3;
    r3 = (r1 + 24);
    r5 = (r30 + 220);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 268), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 272), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r30 + 276), f0.d);
}

loc_806CF994:
{
    r0 = MemoryInline::FlatRead32((r30 + 208));
}

loc_806CF99C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CFA58;
    }
}

loc_806CF9A0:
{
    r3 = MemoryInline::FlatRead16((r30 + 322));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 320));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 - r3);
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_806CFA58;
    }
}

loc_806CF9B0:
{
    r4 = MemoryInline::FlatRead16((r30 + 324));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = 720;
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_806CF9C0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806CFA58;
    }
}

loc_806CF9C4:
{
    r0 = (0 - r4);
    r5 = 1127219200;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 236), r0);
    r0 = (r3 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 72));
    MemoryInline::FlatWriteRam32((r1 + 232), r5);
    r3 = (r1 + 88);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 100));
    r4 = (r30 + 256);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 232));
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 240), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 240));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x806CFA10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = 0x802A0000u;
    r3 = (r1 + 12);
    r5 = (r4 + 16640);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16640));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r4 = (r1 + 88);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r5 = (r30 + 268);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 268), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 272), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r30 + 276), f0.d);
}

loc_806CFA58:
{
    r3 = MemoryInline::FlatRead16((r30 + 320));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 320), static_cast<uint16_t>(r0));
}

loc_806CFA64:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CFA74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806CFAA4;
    }
}

loc_806CFA78:
{
    r0 = MemoryInline::FlatRead32((r30 + 308));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806CFA80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CFAA4;
    }
}

loc_806CFA84:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 80));
    ctx->lr = 0x806CFA9Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805573CCu>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 308), r0);
}

loc_806CFAA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 276));
    r31 = MemoryInline::FlatRead32((r1 + 268));
    r30 = MemoryInline::FlatRead32((r1 + 264));
    r29 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 272);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806CF72C func_806CF72C preserves=true fpr_mask=0x00000000
