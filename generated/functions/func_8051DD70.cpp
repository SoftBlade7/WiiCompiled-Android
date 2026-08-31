#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051DD70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051DD70;

loc_8051DD70:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r23 = r3;
    r24 = r4;
    r25 = 0;
    r31 = 0;
    r29 = 0x809C0000u;
}

loc_8051DD98:
{
    r3 = (r25 & 255);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(4));
    r5 = (r5_rot_2 & 4080);
    r4 = MemoryInline::FlatRead32((r29 + -10484));
    r0 = (r3 * 2336);
    r26 = (r24 + r5);
    r24_addr_2 = (r24 + r5);
    MemoryInline::FlatWrite32(r24_addr_2, r31);
    r30 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r30 + 6000));
}

loc_8051DDBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051DF54;
    }
}

loc_8051DDC0:
{
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801C0990u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r30 + 6157));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-7));
}

loc_8051DDD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051DDE4;
    }
}

loc_8051DDD8:
{
    MemoryInline::FlatWrite8((r30 + 6157), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 6156), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
}

loc_8051DDE4:
{
    r0 = (r25 & 255);
    r27 = (r26 + 4);
    r4 = (r0 * 132);
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 6064), 0, 132u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r30 + 6064));
    r3 = r23;
    r5 = r27;
    r28 = (r23 + r4);
    guest_range_3 = MemoryInline::ResolveRangeHost((r28 + 156), 0, 132u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r28 + 156), r0);
    r4 = (r28 + 156);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r30 + 6068));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r28 + 160), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r30 + 6072));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r28 + 164), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r30 + 6080));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r30 + 6076));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r28 + 168), r6);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r28 + 172), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r30 + 6084));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r28 + 176), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r30 + 6088));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r28 + 180), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r30 + 6092));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r28 + 184), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r30 + 6100));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r30 + 6096));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r28 + 188), r6);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r28 + 192), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r30 + 6108));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r30 + 6104));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r28 + 196), r6);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r28 + 200), r0);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r30 + 6112));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r28 + 204), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 52u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r30 + 6120));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r30 + 6116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r28 + 208), r6);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r28 + 212), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 60u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r30 + 6128));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r30 + 6124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r28 + 216), r6);
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r28 + 220), r0);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r30 + 6132));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, (r28 + 224), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 72u, (r30 + 6136));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r28 + 228), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 76u, (r30 + 6140));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r28 + 232), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 80u, (r30 + 6144));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, (r28 + 236), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 84u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r30 + 6152));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 84u, (r30 + 6148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 84u, (r28 + 240), r6);
        MemoryInline::WriteResolved32(guest_range_3, 88u, (r28 + 244), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_2, 92u, (r30 + 6156));
    MemoryInline::WriteResolved8(guest_range_3, 92u, (r28 + 248), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 93u, (r30 + 6157));
    MemoryInline::WriteResolved8(guest_range_3, 93u, (r28 + 249), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 94u, (r30 + 6158));
    MemoryInline::WriteResolved8(guest_range_3, 94u, (r28 + 250), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 95u, (r30 + 6159));
    MemoryInline::WriteResolved8(guest_range_3, 95u, (r28 + 251), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 96u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 100u, (r30 + 6164));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r30 + 6160));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 96u, (r28 + 252), r6);
        MemoryInline::WriteResolved32(guest_range_3, 100u, (r28 + 256), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 104u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r30 + 6172));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 104u, (r30 + 6168));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 104u, (r28 + 260), r6);
        MemoryInline::WriteResolved32(guest_range_3, 108u, (r28 + 264), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 112u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 116u, (r30 + 6180));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 112u, (r30 + 6176));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 112u, (r28 + 268), r6);
        MemoryInline::WriteResolved32(guest_range_3, 116u, (r28 + 272), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 120u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 124u, (r30 + 6188));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 120u, (r30 + 6184));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 120u, (r28 + 276), r6);
        MemoryInline::WriteResolved32(guest_range_3, 124u, (r28 + 280), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 128u, (r30 + 6192));
    MemoryInline::WriteResolved32(guest_range_3, 128u, (r28 + 284), r0);
    MemoryInline::FlatWrite32(r26, r4);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r26 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051DAC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8051DF34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8051DF54;
    }
}

loc_8051DF38:
{
    r0 = MemoryInline::FlatRead8((r28 + 250));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8051DF54;
    }
}

loc_8051DF44:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 6096));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 6100));
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
}

loc_8051DF54:
{
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(4));
}

loc_8051DF5C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8051DD98;
    }
}

loc_8051DF60:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF8001FB gpr_write=0xFF8009FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051DD70 func_8051DD70 preserves=true fpr_mask=0x00000000
