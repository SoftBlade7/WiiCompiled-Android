#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057EAB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8057EAB8;

loc_8057EAB8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + 22768);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r31 + 120));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8057EAF4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8057EC08;
    }
}

loc_8057EAF8:
{
    // inline leaf 0x80590A10 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A10
}

loc_8057EB00:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_8057EBE0;
    }
}

loc_8057EB04:
{
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r0 = MemoryInline::FlatRead32((r30 + 204));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 100));
}

loc_8057EB18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_8057EB78;
    }
}

loc_8057EB1C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 156));
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8057EB24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057EB44;
    }
}

loc_8057EB28:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8057EB38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057EBE0;
    }
}

loc_8057EB3C:
{
    MemoryInline::FlatWriteFloat32((r30 + 156), f31.d);
    goto loc_8057EBE0;
}

loc_8057EB44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057EBE0;
    }
}

loc_8057EB48:
{
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f2.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 156));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8057EB6C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057EBE0;
    }
}

loc_8057EB70:
{
    MemoryInline::FlatWriteFloat32((r30 + 156), f31.d);
    goto loc_8057EBE0;
}

loc_8057EB78:
{
}

loc_8057EB7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8057EBE0;
    }
}

loc_8057EB80:
{
    f1.d = (-(f31.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 156));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8057EB8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057EBAC;
    }
}

loc_8057EB90:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057EBA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057EBE0;
    }
}

loc_8057EBA4:
{
    MemoryInline::FlatWriteFloat32((r30 + 156), f1.d);
    goto loc_8057EBE0;
}

loc_8057EBAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057EBE0;
    }
}

loc_8057EBB0:
{
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f3.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f0.d = (-(f31.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 96));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 156));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057EBD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057EBE0;
    }
}

loc_8057EBDC:
{
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
}

loc_8057EBE0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057EBF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057EC08;
    }
}

loc_8057EBF4:
{
    r12 = MemoryInline::FlatRead32((r30 + 12));
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x8057EC08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8057EC08:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8057EAB8 func_8057EAB8 preserves=false fpr_mask=0x80000000
