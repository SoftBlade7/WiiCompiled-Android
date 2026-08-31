#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80156618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80156618;

loc_80156618:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
}

loc_80156630:
{
    r27 = r3;
    r26 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80156664;
    }
}

loc_8015664C:
{
}

loc_80156650:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(108))) {
        goto loc_80156664;
    }
}

loc_80156654:
{
}

loc_80156658:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(12))) {
        goto loc_80156664;
    }
}

loc_8015665C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
}

loc_80156660:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801566A0;
    }
}

loc_80156664:
{
    r3 = 0x80340000u;
    r3 = (r3 + -24768);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80156674:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80156698;
    }
}

loc_80156678:
{
    r4 = 0x80280000u;
    r5 = r27;
    r6 = r26;
    r7 = r28;
    r8 = r30;
    r4 = (r4 + 30656);
    r3 = 655360;
    ctx->lr = 0x80156698u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801317A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80156698:
{
    r3 = 0;
    goto loc_80156978;
}

loc_801566A0:
{
    r5 = r26;
    r4 = 0;
    ctx->lr = 0x801566ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = (r26 + -108);
    r0 = (r27 + 108);
    r3 = 0;
}

loc_801566BC:
{
    MemoryInline::FlatWrite32(r27, r5);
    r4 = 0;
    MemoryInline::FlatWrite32((r27 + 4), r5);
    MemoryInline::FlatWrite32((r27 + 8), r3);
    MemoryInline::FlatWrite32((r27 + 104), r0);
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_801568A8;
    }
}

loc_801566D4:
{
}

loc_801566D8:
{
    r3 = (r28 + 65536);
    r3 = (r3 + -8);
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(8))) {
        goto loc_80156854;
    }
}

loc_801566E4:
{
    r3 = (r3 & 65535);
    r0 = (r3 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_801566F8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80156854;
    }
}

loc_801566FC:
{
    r0 = (r4 & 65535);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 160u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r29);
    r3 = (r0 * 20);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 4));
    r4 = (r4 + 8);
    r3 = (r27 + r3);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 160u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 28), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r29 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 32), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r29 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r29 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 36), r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 40), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r29 + 28));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r29 + 32));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 44), r5);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 48), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r29 + 36));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 52), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r29 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r29 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 56), r5);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r29 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r29 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 64), r5);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 68), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r29 + 56));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 72), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 60u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r29 + 60));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r29 + 64));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 76), r5);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 80), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 68u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r29 + 68));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r29 + 72));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 84), r5);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 88), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r29 + 76));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 92), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r29 + 80));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r29 + 84));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r3 + 96), r5);
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r3 + 100), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r29 + 88));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r29 + 92));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 104), r5);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r3 + 108), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r29 + 96));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 112), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r29 + 100));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r29 + 104));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 116), r5);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 120), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 108u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r29 + 108));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r29 + 112));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 124), r5);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 128), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r29 + 116));
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 132), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 120u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r29 + 120));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r29 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r3 + 136), r5);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r3 + 140), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 128u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r29 + 128));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r29 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r3 + 144), r5);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r3 + 148), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r29 + 136));
    MemoryInline::WriteResolved32(guest_range_1, 136u, (r3 + 152), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 140u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r29 + 140));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r29 + 144));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r3 + 156), r5);
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r3 + 160), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 148u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r29 + 148));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 152u, (r29 + 152));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r3 + 164), r5);
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r3 + 168), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 156u, (r29 + 156));
    r29 = (r29 + 160);
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r3 + 172), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801566FC;
    }
}

loc_80156854:
{
    r3 = (r4 & 65535);
    r0 = (r28 - r3);
    ctr = r0;
}

loc_80156864:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r28))) {
        goto loc_801568A8;
    }
}

loc_80156868:
{
    r0 = (r4 & 65535);
    r3 = MemoryInline::FlatRead32(r29);
    r5 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r4 + 1);
    r5 = (r27 + r5);
    MemoryInline::FlatWrite32((r5 + 16), r3);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 12));
    MemoryInline::FlatWrite32((r5 + 24), r3);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r29 = (r29 + 20);
    MemoryInline::FlatWrite32((r5 + 32), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80156868;
    }
}

loc_801568A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801568AC:
{
    MemoryInline::FlatWrite16((r27 + 12), static_cast<uint16_t>(r28));
    r5 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80156964;
    }
}

loc_801568B8:
{
}

loc_801568BC:
{
    r3 = (r30 + 65536);
    r3 = (r3 + -8);
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(8))) {
        goto loc_80156934;
    }
}

loc_801568C8:
{
    r3 = (r3 & 65535);
    r0 = (r3 + 7);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_801568DC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80156934;
    }
}

loc_801568E0:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 131070);
    guest_range_2 = MemoryInline::ResolveRangeHost(r31, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, r31);
    r3 = (r27 + r3);
    r5 = (r5 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 78), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r3 + 78), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r31 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r3 + 80), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 82), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r31 + 6));
    MemoryInline::WriteResolved16(guest_range_3, 6u, (r3 + 84), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r31 + 8));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 86), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r31 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 88), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r31 + 12));
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r3 + 90), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r31 + 14));
    r31 = (r31 + 16);
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r3 + 92), static_cast<uint16_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801568E0;
    }
}

loc_80156934:
{
    r3 = (r5 & 65535);
    r0 = (r30 - r3);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r30));
}

loc_80156944:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80156964;
    }
}

loc_80156948:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 131070);
    r4 = MemoryInline::FlatRead16(r31);
    r3 = (r27 + r0);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 78), static_cast<uint16_t>(r4));
    r31 = (r31 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80156948;
    }
}

loc_80156964:
{
    r3 = r30;
    r4 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015BC30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    MemoryInline::FlatWrite16((r27 + 76), static_cast<uint16_t>(r30));
    r3 = 1;
}

loc_80156978:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80156618 func_80156618 preserves=true fpr_mask=0x00000000
