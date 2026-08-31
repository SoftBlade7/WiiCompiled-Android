#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80561450(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80561450;

loc_80561450:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4 = 0x80890000u;
    f31.d = MemoryInline::FlatReadFloat32((r4 + 5100));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0;
    goto loc_80561538;
}

loc_80561484:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r8 = MemoryInline::FlatRead8((r3 + 32));
    r6 = MemoryInline::FlatRead32((r5 + 12));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r6_addr_2 = (r6 + r5);
    r6 = MemoryInline::FlatRead32(r6_addr_2);
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 8), 0, 40u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r6 + 20));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 33), 0, 52u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 11u, (r3 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r6 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 15u, (r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r6 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 19u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r6 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 23u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r6 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 27u, (r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r6 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 31u, (r3 + 64), f0.d);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 36u, (r6 + 44));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r3 + 68), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 37u, (r6 + 45));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r3 + 69), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 38u, (r6 + 46));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r3 + 70), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 39u, (r6 + 47));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r3 + 71), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r5 = MemoryInline::FlatRead32((r5 + 16));
    r5_addr_2 = (r5 + r0);
    r7 = MemoryInline::FlatRead8(r5_addr_2);
    r9 = (r5 + r0);
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r3 + 72), static_cast<uint8_t>(r7));
    r6 = MemoryInline::FlatRead8((r9 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r3 + 73), static_cast<uint8_t>(r6));
    r5 = MemoryInline::FlatRead8((r9 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r3 + 74), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead8((r9 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r3 + 75), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r3 + 76), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r3 + 77), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r3 + 78), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r3 + 79), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 47u, (r3 + 80), f31.d);
    MemoryInline::WriteResolved8(guest_range_1, 51u, (r3 + 84), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 7u, (r3 + 40), f31.d);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 33), static_cast<uint8_t>(r8));
}

loc_80561538:
{
    r3 = r31;
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl0_0x800AF180:
{
}

loc_inl0_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800AF190;
    }
}

loc_inl0_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_800AF180;
}

loc_inl0_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80561544:
{
    r4 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80561484;
    }
}

loc_8056154C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = leaf_stack_saved_f31_entry;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00003EA gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80561450 func_80561450 preserves=true fpr_mask=0x00000000
