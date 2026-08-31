#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056DE94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056DE94;

loc_8056DE94:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8056DEA0:
{
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056DF20;
    }
}

loc_8056DEBC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 596), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 596));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 600));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 604));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 608));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 612));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 616));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 620));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r1 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 624));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r1 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 628));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r1 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 632));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r1 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 636));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r1 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 640));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r1 + 52), f0.d);
    goto loc_8056DF44;
}

loc_8056DF20:
{
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r31 = r3;
    r3 = r29;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = r3;
    r3 = (r1 + 8);
    r4 = (r4 + 256);
    r5 = (r31 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80230118u>(ctx);
    f0 = ctx->fpr[0];
}

loc_8056DF44:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 80u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 28), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r30 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r30 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r30 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r30 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r30 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r30 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r30 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r30 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r30 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r1 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r30 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r30 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r30 + 72), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 64u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r1 + 76));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r1 + 72));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r1 + 68));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 76u, (r1 + 84));
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003F gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056DE94 func_8056DE94 preserves=true fpr_mask=0x00000000
