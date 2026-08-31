#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EEBEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806EEBEC;

loc_806EEBEC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 74));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EEC10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EEE70;
    }
}

loc_806EEC14:
{
    r0 = MemoryInline::FlatRead8((r3 + 23));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EEC1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EEC24;
    }
}

loc_806EEC20:
{
    ctx->lr = 0x806EEC24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806ED3E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_806EEC24:
{
    r0 = MemoryInline::FlatRead8((r30 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EEC34:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    MemoryInline::FlatWriteFloat32((r30 + 92), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 64));
    MemoryInline::FlatWriteFloat32((r30 + 96), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EEC78;
    }
}

loc_806EEC4C:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EEC54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EEC64;
    }
}

loc_806EEC58:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EF0F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_806EEC78;
}

loc_806EEC64:
{
    r4 = 0x808A0000u;
    r3 = r30;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 2832));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EF0F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_806EEC78:
{
    r4 = MemoryInline::FlatRead16((r30 + 70));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = r30;
    r5 = MemoryInline::FlatRead16((r30 + 72));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = (r1 + 32);
    r7 = (r1 + 20);
    ctx->lr = 0x806EEC90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EF224u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    r4 = (r30 + 24);
    r5 = (r30 + 92);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x806EECF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r30 + 64));
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2832));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 104), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 64), f2.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_806EED14:
{
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EED1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EEEA0;
    }
}

loc_806EED20:
{
    r3 = r30;
    r31 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EF664u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r30 + 12));
}

loc_806EED34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806EED78;
    }
}

loc_806EED38:
{
    r4 = MemoryInline::FlatRead8((r30 + 68));
}

loc_806EED40:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_806EED5C;
    }
}

loc_806EED44:
{
    r3 = MemoryInline::FlatRead16((r30 + 72));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_806EED50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_806EED5C;
    }
}

loc_806EED54:
{
    r0 = 1;
    goto loc_806EED94;
}

loc_806EED5C:
{
}

loc_806EED60:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_806EED90;
    }
}

loc_806EED64:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_806EED6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_806EED90;
    }
}

loc_806EED70:
{
    r0 = 1;
    goto loc_806EED94;
}

loc_806EED78:
{
    r3 = MemoryInline::FlatRead16((r30 + 72));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    goto loc_806EED94;
}

loc_806EED90:
{
    r0 = 0;
}

loc_806EED94:
{
}

loc_806EED98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806EEE1C;
    }
}

loc_806EED9C:
{
    r0 = MemoryInline::FlatRead8((r30 + 12));
    r31 = 2;
}

loc_806EEDA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806EEDF0;
    }
}

loc_806EEDAC:
{
    r0 = MemoryInline::FlatRead8((r30 + 22));
}

loc_806EEDB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806EEDF0;
    }
}

loc_806EEDB8:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_806EEDC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806EEDDC;
    }
}

loc_806EEDC4:
{
    r3 = MemoryInline::FlatRead16((r30 + 72));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r0));
    r0 = (r3 + -2);
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    goto loc_806EEDF0;
}

loc_806EEDDC:
{
    r3 = MemoryInline::FlatRead16((r30 + 72));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r0));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
}

loc_806EEDF0:
{
    r0 = MemoryInline::FlatRead8((r30 + 22));
}

loc_806EEDF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806EEE1C;
    }
}

loc_806EEDFC:
{
    r3 = MemoryInline::FlatRead16((r30 + 6));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 74), static_cast<uint8_t>(r0));
    r0 = (r3 + -1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 70), static_cast<uint16_t>(r0));
}

loc_806EEE1C:
{
    r0 = MemoryInline::FlatRead8((r30 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EEE24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EEE4C;
    }
}

loc_806EEE28:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32((r30 + 76));
    r0 = (r0 * 56);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 48));
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    goto loc_806EEEA0;
}

loc_806EEE4C:
{
    r0 = MemoryInline::FlatRead16((r30 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32((r30 + 76));
    r0 = (r0 * 56);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 48));
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    goto loc_806EEEA0;
}

loc_806EEE70:
{
    r4 = MemoryInline::FlatRead16((r3 + 6));
    r31 = 2;
    r5 = MemoryInline::FlatRead32((r3 + 76));
    r0 = (r4 + -2);
    r0 = (r0 * 56);
    r4 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
}

loc_806EEEA0:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xF00017FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xE000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x806EEBEC func_806EEBEC preserves=true fpr_mask=0x00000000
