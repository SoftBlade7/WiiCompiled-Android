#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054E9D4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8054E9D4;

loc_8054E9D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80890000u;
    r30 = (r30 + 3448);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054EA00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054EB38;
    }
}

loc_8054EA04:
{
    r6 = (r30 + 488);
    r8 = MemoryInline::FlatRead8((r30 + 488));
    r7 = MemoryInline::FlatRead8((r6 + 1));
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r3 = 4;
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
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
    r31 = -872349696;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 300), 0, 196u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 300));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    r3 = 128;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 300));
    r4 = 0;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    r5 = 4;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 192u, (r30 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 300));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 192u, (r30 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    r6 = MemoryInline::FlatRead32((r29 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r6);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 192u, (r30 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 300));
    r6 = MemoryInline::FlatRead32((r29 + 12));
    f1.d = MemoryInline::FlatReadFloat32(r6);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 192u, (r30 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 4), 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r29 + 12));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r29 + 8));
        }
    }
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 300));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r29 + 12));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r29 + 8));
        }
    }
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r29 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r29 + 8));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r29 + 4));
        }
    }
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 300));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r29 + 8));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 492));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_8054EB38:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00001FB gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054E9D4 func_8054E9D4 preserves=true fpr_mask=0x00000000
