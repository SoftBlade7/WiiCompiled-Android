#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805654EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80565604_loc_0 = 0;
    uint32_t addr_lfsx_80565608_loc_0 = 0;
    uint32_t r28_rot_0 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];

    goto loc_805654EC;

loc_805654EC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r5 = 0x80890000u;
    r4 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r0);
    r5 = (r5 + 5320);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 80));
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r1 + 92), r31);
    f6.d = MemoryInline::FlatReadFloat32((r5 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r1 + 88), r30);
    r30 = (r5 + 8);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 76));
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r29);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r1 + 80), r28);
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r28 = (r28_rot_0 & -8);
    r3 = (r1 + 12);
    f7.d = MemoryInline::FlatReadFloat32((r4 + 19432));
    r4 = (r1 + 8);
    r29 = MemoryInline::FlatRead32((r5 + 8));
    f2.d = (f0.d + f7.d);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r29);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f7.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 60u, true, false);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 12));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f7.d));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r31);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    r12 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r30 + 20));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f7.d));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r12);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f7.d));
    r11 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r11);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    r9 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r30 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r9);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 36));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r30 + 44));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r30 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r30 + 52));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r30 + 56));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r30 + 60));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r10);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r8);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r7);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r6);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r30 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r5);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r12);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r11);
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r9);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 8), f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 20), f7.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 28), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 32), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 36), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 44), f7.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r1 + 52), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r1 + 56), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r1 + 60), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r1 + 64), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r1 + 68), f7.d);
    addr_lfsx_80565604_loc_0 = (r4 + r28);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80565604_loc_0);
    addr_lfsx_80565608_loc_0 = (r3 + r28);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80565608_loc_0);
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80173400u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r28 = MemoryInline::FlatRead32((r1 + 80));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000000A gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805654EC func_805654EC preserves=true fpr_mask=0x00000000
