#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B7544(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r10_rot_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r31_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_801B7544;

loc_801B7544:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r30 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r29;
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r0 = (r0 * r6);
    r0 = (r5 - r0);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r31 = (r31_rot_0 & -8);
    r30_addr_0 = (r30 + r31);
    r9 = MemoryInline::FlatRead32(r30_addr_0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r9, 0, 35u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 33u, (r9 + 33));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 34u, (r9 + 34));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r9 + 8));
    r5 = (r0 - r6);
    r0 = (r6 - r0);
    r0 = (r5 | r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r9 + 2));
            r6 = MemoryInline::ReadResolved16(guest_range_0, 0u, r9);
        }
    }
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_0 & 1);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r9 + 4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r9 + 12));
            r9 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r9 + 16));
        }
    }
    ctx->lr = 0x801B75B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x801707F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r30_addr_1 = (r30 + r31);
    r7 = MemoryInline::FlatRead32(r30_addr_1);
    r5 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r7 + 33));
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r7 + 34));
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -26184));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r4 = MemoryInline::FlatRead32((r7 + 20));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = MemoryInline::FlatRead32((r7 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r7 + 28));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r7 = MemoryInline::FlatRead8((r7 + 32));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80170A4Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF83E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801B7544 func_801B7544 preserves=true fpr_mask=0x00000000
