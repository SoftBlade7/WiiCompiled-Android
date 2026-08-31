#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A6AB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsux_805A6AE4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A6AB8;

loc_805A6AB8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r0 = (r4 * 24);
    r4 = 0x80890000u;
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r5;
    r4 = (r4 + 8736);
    addr_lfsux_805A6AE4_loc_0 = (r4 + r0);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsux_805A6AE4_loc_0);
    r4 = addr_lfsux_805A6AE4_loc_0;
    r6 = MemoryInline::FlatRead32((r3 + 824));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWrite32((r6 + 20), r4);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r6 + 8), f0.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805A6B04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A6B0C;
    }
}

loc_805A6B08:
{
    MemoryInline::FlatWriteFloat32((r6 + 8), f3.d);
}

loc_805A6B0C:
{
    r0 = 1;
    r4 = (r4 + 12);
    f3.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWrite32((r6 + 48), r4);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r6 + 36), f0.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805A6B30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A6B38;
    }
}

loc_805A6B34:
{
    MemoryInline::FlatWriteFloat32((r6 + 36), f3.d);
}

loc_805A6B38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(44));
}

loc_805A6B3C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r6 + 28), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A6B7C;
    }
}

loc_805A6B48:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8728));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A6B54:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A6B7C;
    }
}

loc_805A6B58:
{
    r4 = MemoryInline::FlatRead8((r3 + 156));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    f1.d = f31.d;
    r4 = r31;
    r5 = 1;
    ctx->lr = 0x805A6B7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059041Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805A6B7C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805A6AB8 func_805A6AB8 preserves=false fpr_mask=0x80000000
