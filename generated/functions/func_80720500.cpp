#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80720500(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80720500;

loc_80720500:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r31 = (r29 + 40);
    r30 = 0;
}

loc_8072052C:
{
    r3 = (r1 + 8);
    r4 = r31;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r30 = (r30 + 1);
    r31 = (r31 + 48);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(3));
}

loc_80720548:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8072052C;
    }
}

loc_8072054C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 80u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 184), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r29 + 184), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r29 + 188), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r29 + 192), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r29 + 196), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r29 + 200), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r29 + 204), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r29 + 208), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r29 + 212), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r29 + 216), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r1 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r29 + 220), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r29 + 224), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r29 + 228), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r1 + 76));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r1 + 72));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r1 + 68));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 76u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003E gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x8000C000 fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80720500 func_80720500 preserves=true fpr_mask=0x00000000
