#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023D380(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023D380;

loc_8023D380:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f30.d = f1.d;
    f31.d = f2.d;
    r6 = r5;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24432));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24428));
    r30 = r3;
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    r5 = (r1 + 8);
    r4 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    // inline leaf 0x802276C0 (25 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25240));
    r8 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -25228));
    r8 = (r8 + 12416);
    r7 = MemoryInline::FlatRead32(r5);
    r0 = 1;
    r5 = MemoryInline::FlatRead32((r5 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -25236));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -25232));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r3 + 52), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802276C0
    r3 = 0x802A0000u;
}

loc_8023D3DC:
{
    r3 = (r3 + 16140);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 56), r3);
    MemoryInline::FlatWrite32((r30 + 60), r0);
    MemoryInline::FlatWriteFloat32((r30 + 64), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 68), f31.d);
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8023D3FC;
    }
}

loc_8023D3F8:
{
    goto loc_8023D400;
}

loc_8023D3FC:
{
    r31 = MemoryInline::FlatRead32((r13 + -23788));
}

loc_8023D400:
{
    r0 = MemoryInline::FlatRead32((r30 + 60));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_8023D408:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023D41C;
    }
}

loc_8023D40C:
{
    r0 = MemoryInline::FlatRead16((r30 + 52));
    MemoryInline::FlatWrite32((r30 + 60), r31);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
}

loc_8023D41C:
{
    r3 = r30;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000203F gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0xC000001E fpr_write=0xC000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023D380 func_8023D380 preserves=true fpr_mask=0x00000000
