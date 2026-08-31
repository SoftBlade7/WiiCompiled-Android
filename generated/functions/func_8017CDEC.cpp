#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017CDEC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8017CDEC;

loc_8017CDEC:
{
}

loc_8017CDF0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8017D058;
    }
}

loc_8017CDF4:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017CE04:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017CE0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8017CE20;
    }
}

loc_8017CE10:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017CE18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CE20;
    }
}

loc_8017CE1C:
{
    goto loc_8017CE50;
}

loc_8017CE20:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017CE2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8017CE40;
    }
}

loc_8017CE30:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017CE38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CE40;
    }
}

loc_8017CE3C:
{
    goto loc_8017CE50;
}

loc_8017CE40:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017CE04;
    }
}

loc_8017CE4C:
{
    r3 = -1;
}

loc_8017CE50:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl0_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl0_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x80173E54;
    }
}

loc_inl0_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl0_0x80173E58;
}

loc_inl0_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl0_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
}

loc_8017CE74:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017CEB4;
    }
}

loc_8017CE78:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017CE88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017CE9C;
    }
}

loc_8017CE8C:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017CE9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CE9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017CEA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017CEAC;
    }
}

loc_8017CEA4:
{
    r3 = 4;
    ctx->lr = 0x8017CEACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CEAC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017CEB4:
{
    r28 = 1;
}

loc_8017D058:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r4 = (r3 + 1);
}

loc_8017D064:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(r4))) {
        goto loc_8017D074;
    }
}

loc_8017D068:
{
    r0 = (r3 + 9);
}

loc_8017D070:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r0))) {
        goto loc_8017D0A8;
    }
}

loc_8017D074:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r0 = (r3 + 9);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    goto loc_8017D0BC;
}

loc_8017D0A8:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
}

loc_8017D0BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8017D0C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8017D0C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0CC:
{
    r0 = MemoryInline::FlatRead32(r27);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 608));
    r0 = MemoryInline::FlatRead8((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017D0E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 468));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 744));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017D0F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 848));
    MemoryInline::FlatWriteFloat32((r4 + 452), f0.d);
    r0 = MemoryInline::FlatRead32(r27);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 608));
    ctx->lr = 0x8017D118u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80175ED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8017D118:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8017CDEC func_8017CDEC preserves=true fpr_mask=0x00000000
