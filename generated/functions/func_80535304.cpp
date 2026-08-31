#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80535304(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    goto loc_80535304;

loc_80535304:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r4 = MemoryInline::FlatRead8((r3 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r4 = (r4 * 240);
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535338:
{
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r4 + -4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80535374;
    }
}

loc_80535350:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_80535358:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80535368;
    }
}

loc_8053535C:
{
    r4 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_80535368:
{
    r4 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 44), r0);
}

loc_80535374:
{
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + -10520));
    r4 = MemoryInline::FlatRead32((r5 + 32));
}

loc_80535384:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80535390;
    }
}

loc_80535388:
{
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80535394;
}

loc_80535390:
{
    r4 = 0;
}

loc_80535394:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_805353A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805353C8;
    }
}

loc_805353A4:
{
    r4 = MemoryInline::FlatRead32((r5 + 28));
}

loc_805353AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805353B8;
    }
}

loc_805353B0:
{
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_805353BC;
}

loc_805353B8:
{
    r4 = 0;
}

loc_805353BC:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_805353C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805353CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053567C;
    }
}

loc_805353D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805353D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053567C;
    }
}

loc_805353DC:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805353FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053567C;
    }
}

loc_80535400:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r4 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_80535418:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80535428;
    }
}

loc_8053541C:
{
}

loc_80535420:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80535428;
    }
}

loc_80535424:
{
    r3 = 1;
}

loc_80535428:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053542C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053544C;
    }
}

loc_80535430:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
    r0 = (r0 * 240);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80535444:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053544C;
    }
}

loc_80535448:
{
    r29 = 1;
}

loc_8053544C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = 0x809C0000u;
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r4 + -10520));
    r8 = r29;
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r7 = (r1 + 8);
    r6 = MemoryInline::FlatRead16((r30 + 10));
    ctx->lr = 0x80535480u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80511500u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r6 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_8053548C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053567C;
    }
}

loc_80535490:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 336));
    r3 = 0;
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805354A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805354B0;
    }
}

loc_805354A8:
{
    r3 = 1;
    goto loc_805354C0;
}

loc_805354B0:
{
    r0 = MemoryInline::FlatRead16((r30 + 10));
}

loc_805354B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_805354C0;
    }
}

loc_805354BC:
{
    r3 = 1;
}

loc_805354C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805354C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805354E4;
    }
}

loc_805354C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r30;
    r5 = r31;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    ctx->lr = 0x805354DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80534DF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r31 = r3;
    goto loc_805354F8;
}

loc_805354E4:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead16((r30 + 10));
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80515C24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r31 = r3;
}

loc_805354F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 20));
    r0 = 1127219200;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r5 = 0x80890000u;
    r3 = MemoryInline::FlatRead16((r30 + 36));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    r4 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f4.d = MemoryInline::FlatReadFloat64((r5 + 416));
    r3 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 424));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80535558:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80535574;
    }
}

loc_8053555C:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
}

loc_80535574:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80535580:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80535588;
    }
}

loc_80535584:
{
    MemoryInline::FlatWriteFloat32((r30 + 16), f1.d);
}

loc_80535588:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2928));
    r0 = (r3 + -3);
}

loc_805355A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_805355B8;
    }
}

loc_805355A4:
{
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 193);
}

loc_805355B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805355B8;
    }
}

loc_805355B4:
{
    r4 = r3;
}

loc_805355B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805355BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053567C;
    }
}

loc_805355C0:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x80590100
    r4 = (r1 + 24);
    // inline leaf 0x80590C94 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 196));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C94
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 336));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805355E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805355F8;
    }
}

loc_805355EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805355F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053567C;
    }
}

loc_805355F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    ctx->lr = 0x80535610u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243A00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    // inline leaf 0x80518B78 (14 guest instruction(s))
}

loc_inl5_0x80518B78:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
}

loc_inl5_0x80518B80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x80518BA8;
    }
}

loc_inl5_0x80518B84:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl5_0x80518B8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_0x80518BA8;
    }
}

loc_inl5_0x80518B90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_0x80518BA0;
    }
}

loc_inl5_0x80518B94:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl5_cont_80518B78;
}

loc_inl5_0x80518BA0:
{
    r3 = 0;
    goto loc_inl5_cont_80518B78;
}

loc_inl5_0x80518BA8:
{
    r3 = 0;
}

loc_inl5_cont_80518B78:
{
    // end of inlined leaf 0x80518B78
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535628:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053567C;
    }
}

loc_8053562C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 428));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80535654:
{
    r0 = cr;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053565C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80535670;
    }
}

loc_80535660:
{
    r0 = MemoryInline::FlatRead32((r30 + 56));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r30 + 56), r0);
    goto loc_8053567C;
}

loc_80535670:
{
    r0 = MemoryInline::FlatRead32((r30 + 56));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r30 + 56), r0);
}

loc_8053567C:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
// RECOMP_REGISTRATION base 0x80535304 func_80535304 preserves=true fpr_mask=0x00000000
