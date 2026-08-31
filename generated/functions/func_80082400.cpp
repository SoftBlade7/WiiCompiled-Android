#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80082400(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t r30_mdest_0 = 0;
    uint32_t r30_mdest_1 = 0;
    uint32_t r30_mdest_2 = 0;
    uint32_t r30_mdest_3 = 0;
    uint32_t r30_mrot_0 = 0;
    uint32_t r30_mrot_1 = 0;
    uint32_t r30_mrot_2 = 0;
    uint32_t r30_mrot_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80082400;

loc_80082400:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r5 = (r1 + 22);
    r6 = (r1 + 20);
    r7 = (r1 + 56);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    r8 = (r1 + 52);
    r9 = (r1 + 48);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r4;
    r3 = r30;
    r4 = (r1 + 60);
    r10 = (r1 + 18);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    InvokeDirectCpu<0x80170BF8u>(ctx);
    r3 = MemoryInline::FlatRead32((r1 + 60));
    r0 = (r1 + 24);
    MemoryInline::FlatWrite32(r31, r3);
    r3 = r30;
    r30 = MemoryInline::FlatRead32((r31 + 24));
    r4 = (r1 + 44);
    r10 = MemoryInline::FlatRead16((r1 + 20));
    r5 = (r1 + 40);
    r7 = MemoryInline::FlatRead16((r1 + 22));
    r6 = (r1 + 36);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r7));
    r7 = (r1 + 32);
    r8 = (r1 + 28);
    r9 = (r1 + 17);
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r10));
    r10 = (r1 + 16);
    r11 = MemoryInline::FlatRead32((r1 + 56));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(28));
    r30_mrot_0 = (r30_rot_0 & -268435456);
    r30_mdest_0 = (r30 & 268435455);
    r30 = (r30_mdest_0 | r30_mrot_0);
    MemoryInline::FlatWrite32((r31 + 24), r30);
    r11 = MemoryInline::FlatRead32((r1 + 52));
    r12 = MemoryInline::FlatRead32((r1 + 48));
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(25));
    r30_mrot_1 = (r30_rot_1 & 100663296);
    r30_mdest_1 = (r30 & -100663297);
    r30 = (r30_mdest_1 | r30_mrot_1);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(23));
    r30_mrot_2 = (r30_rot_2 & 25165824);
    r30_mdest_2 = (r30 & -25165825);
    r30 = (r30_mdest_2 | r30_mrot_2);
    MemoryInline::FlatWrite32((r31 + 24), r30);
    r12 = MemoryInline::FlatRead8((r1 + 18));
    r11 = (0 - r12);
    r11 = (r11 | r12);
    r30_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(28));
    r30_mrot_3 = (r30_rot_3 & 134217728);
    r30_mdest_3 = (r30 & -134217729);
    r30 = (r30_mdest_3 | r30_mrot_3);
    MemoryInline::FlatWrite32((r31 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    InvokeDirectCpu<0x80170CBCu>(ctx);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 72u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 44));
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r4_mrot_0 = (r4_rot_0 & 7340032);
    r4_mdest_0 = (r4 & -7340033);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29048));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r4_mrot_1 = (r4_rot_1 & 524288);
    r4_mdest_1 = (r4 & -524289);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite32((r31 + 24), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r1 + 32));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r1 + 36));
        }
    }
    MemoryInline::FlatWriteFloat32((r31 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 16), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r31 + 20), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r1 + 17));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r4_mrot_2 = (r4_rot_2 & 262144);
    r4_mdest_2 = (r4 & -262145);
    r4 = (r4_mdest_2 | r4_mrot_2);
    MemoryInline::FlatWrite32((r31 + 24), r4);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r1 + 16));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
    r4_mrot_3 = (r4_rot_3 & 131072);
    r4_mdest_3 = (r4 & -131073);
    r4 = (r4_mdest_3 | r4_mrot_3);
    MemoryInline::FlatWrite32((r31 + 24), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 24));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r4_mrot_4 = (r4_rot_4 & 98304);
    r4_mdest_4 = (r4 & -98305);
    r4 = (r4_mdest_4 | r4_mrot_4);
    MemoryInline::FlatWrite32((r31 + 24), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r1 + 76));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r1 + 72));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001E gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80082400 func_80082400 preserves=true fpr_mask=0x00000000
