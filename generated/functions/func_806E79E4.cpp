#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E79E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806E79E4;

loc_806E79E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 229));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E7A00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E7A2C;
    }
}

loc_806E7A04:
{
    r4 = MemoryInline::FlatRead32((r3 + 1236));
    r0 = MemoryInline::FlatRead32((r3 + 1248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_806E7A10:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806E7A1C;
    }
}

loc_806E7A14:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 184), r0);
}

loc_806E7A1C:
{
    r4 = MemoryInline::FlatRead32((r3 + 1236));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1236), r0);
    goto loc_806E7B68;
}

loc_806E7A2C:
{
    r0 = MemoryInline::FlatRead8((r3 + 228));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E7A34:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_806E7B68;
    }
}

loc_806E7A38:
{
    r4 = MemoryInline::FlatRead32((r3 + 1236));
    r0 = MemoryInline::FlatRead32((r3 + 1088));
}

loc_806E7A44:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_806E7A5C;
    }
}

loc_806E7A48:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_806E7A6C;
    }
}

loc_806E7A4C:
{
    r4 = MemoryInline::FlatRead32((r3 + 224));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_806E7A6C;
}

loc_806E7A5C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_806E7A6C;
    }
}

loc_806E7A60:
{
    r4 = MemoryInline::FlatRead32((r3 + 224));
    r0 = 1;
    MemoryInline::FlatWrite32((r4 + 16), r0);
}

loc_806E7A6C:
{
    r3 = MemoryInline::FlatRead32((r3 + 224));
    // inline leaf 0x80747BFC (7 guest instruction(s))
}

loc_inl0_0x80747BFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_0x80747C04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x80747C10;
    }
}

loc_inl0_0x80747C08:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl0_cont_80747BFC;
}

loc_inl0_0x80747C10:
{
    r3 = -1;
}

loc_inl0_cont_80747BFC:
{
    // end of inlined leaf 0x80747BFC
}

loc_806E7A78:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_806E7AE8;
    }
}

loc_806E7A7C:
{
    r0 = MemoryInline::FlatRead32((r31 + 1232));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
}

loc_806E7A8C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806E7AA8;
    }
}

loc_806E7A90:
{
    r0 = MemoryInline::FlatRead32((r31 + 1088));
    r4 = MemoryInline::FlatRead32((r31 + 1236));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
}

loc_806E7AA0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_806E7AA8;
    }
}

loc_806E7AA4:
{
    r5 = 0;
}

loc_806E7AA8:
{
    r0 = MemoryInline::FlatRead8((r31 + 1172));
}

loc_806E7AB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806E7AE8;
    }
}

loc_806E7AB4:
{
}

loc_806E7AB8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_806E7AE8;
    }
}

loc_806E7ABC:
{
    r0 = MemoryInline::FlatRead32((r31 + 1272));
}

loc_806E7AC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_806E7AE8;
    }
}

loc_806E7AC8:
{
    MemoryInline::FlatWrite32((r31 + 1232), r3);
    r5 = 2;
    r4 = MemoryInline::FlatRead32((r31 + 224));
    r0 = 5;
    MemoryInline::FlatWrite32((r4 + 16), r5);
    r4 = MemoryInline::FlatRead32((r31 + 224));
    MemoryInline::FlatWrite32((r4 + 32), r3);
    MemoryInline::FlatWrite32((r31 + 184), r0);
}

loc_806E7AE8:
{
    r3 = 0x808A0000u;
    r4 = MemoryInline::FlatRead32((r31 + 1236));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 2164));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1092));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 1236), r0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806E7B04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E7B10;
    }
}

loc_806E7B08:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    MemoryInline::FlatWriteFloat32((r31 + 1092), f0.d);
}

loc_806E7B10:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1096));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 2164));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806E7B20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E7B2C;
    }
}

loc_806E7B24:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    MemoryInline::FlatWriteFloat32((r31 + 1096), f0.d);
}

loc_806E7B2C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1096));
    r3 = 0x808C0000u;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 52));
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1092));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 28888));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r3 = MemoryInline::FlatRead32((r31 + 224));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1084));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x806E7B68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806E7B68:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806E79E4 func_806E79E4 preserves=true fpr_mask=0x00000000
