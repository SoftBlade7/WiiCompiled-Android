#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054D388(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

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
    uint32_t cr = ctx->cr;

    goto loc_8054D388;

loc_8054D388:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + 15552);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 3748));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8054D3B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8054D470;
    }
}

loc_8054D3BC:
{
    f0.d = PPC_Fctiwz(f1.d);
    r7 = MemoryInline::FlatRead8((r5 + 176));
    r6 = MemoryInline::FlatRead8((r5 + 177));
    r4 = (r1 + 12);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r3 = 4;
    r5 = MemoryInline::FlatRead8((r5 + 178));
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170474u>(ctx);
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r4 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 3748));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 3748));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 3908));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 3748));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 3908));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 3908));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 3748));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 44));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 3908));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_8054D470:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054D388 func_8054D388 preserves=true fpr_mask=0x00000000
