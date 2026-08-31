#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003C4A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8003C4A0;

loc_8003C4A0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead16(r4);
    r25 = r3;
    r30 = r4;
    r31 = r5;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8017351Cu>(ctx);
    r3 = MemoryInline::FlatRead8((r30 + 5));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801722A8u>(ctx);
    r3 = 0;
    r4 = 0;
    r5 = 1;
    r6 = 2;
    r7 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8017200Cu>(ctx);
    r29 = r30;
    r28 = r30;
    r26 = 0;
    goto loc_8003C5FC;
}

loc_8003C4FC:
{
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80171B58u>(ctx);
    r4 = MemoryInline::FlatRead8((r29 + 12));
    r3 = r26;
    r5 = MemoryInline::FlatRead8((r29 + 13));
    r6 = MemoryInline::FlatRead8((r29 + 14));
    r7 = MemoryInline::FlatRead8((r29 + 15));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r4 = MemoryInline::FlatRead8((r29 + 48));
    r3 = r26;
    r5 = MemoryInline::FlatRead8((r29 + 49));
    r6 = MemoryInline::FlatRead8((r29 + 50));
    r7 = MemoryInline::FlatRead8((r29 + 51));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r4 = MemoryInline::FlatRead8((r28 + 28));
    r3 = r26;
    r5 = MemoryInline::FlatRead8((r28 + 29));
    r6 = MemoryInline::FlatRead8((r28 + 30));
    r7 = MemoryInline::FlatRead8((r28 + 31));
    r8 = MemoryInline::FlatRead8((r28 + 32));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171D60u>(ctx);
    r4 = MemoryInline::FlatRead8((r28 + 64));
    r3 = r26;
    r5 = MemoryInline::FlatRead8((r28 + 65));
    r6 = MemoryInline::FlatRead8((r28 + 66));
    r7 = MemoryInline::FlatRead8((r28 + 67));
    r8 = MemoryInline::FlatRead8((r28 + 68));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171DB8u>(ctx);
    r27 = (r30 + r26);
    r3 = r26;
    r4 = MemoryInline::FlatRead8((r27 + 84));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171F30u>(ctx);
    r4 = MemoryInline::FlatRead8((r27 + 88));
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171F80u>(ctx);
    r3 = r26;
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171FD0u>(ctx);
    r0 = MemoryInline::FlatRead8((r27 + 8));
}

loc_8003C5A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8003C5BC;
    }
}

loc_8003C5A4:
{
    r3 = r26;
    r4 = 0;
    r5 = 0;
    r6 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    goto loc_8003C5F0;
}

loc_8003C5BC:
{
}

loc_8003C5C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8003C5DC;
    }
}

loc_8003C5C4:
{
    r4 = MemoryInline::FlatRead32((r25 + 200));
    r3 = r26;
    r6 = 4;
    r5 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    goto loc_8003C5F0;
}

loc_8003C5DC:
{
    r3 = r26;
    r4 = 255;
    r5 = 255;
    r6 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
}

loc_8003C5F0:
{
    r29 = (r29 + 4);
    r28 = (r28 + 5);
    r26 = (r26 + 1);
}

loc_8003C5FC:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_8003C604:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_8003C4FC;
    }
}

loc_8003C608:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 & 64);
}

loc_8003C610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003C6B0;
    }
}

loc_8003C614:
{
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80171B38u>(ctx);
    r4 = MemoryInline::FlatRead32((r25 + 204));
    r3 = 0;
    r5 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171A6Cu>(ctx);
    r3 = 0;
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171968u>(ctx);
    r0 = MemoryInline::FlatRead8((r30 + 168));
    r4 = (r30 + 144);
    r3 = 1;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171814u>(ctx);
    r26 = 1;
    r27 = 0;
    r29 = 0;
    goto loc_8003C6A0;
}

loc_8003C660:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r0 = (r0 & r26);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003C698;
    }
}

loc_8003C66C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r3 = r27;
    r4 = 0;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    r6 = 7;
    r7 = 1;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    InvokeDirectCpu<0x801717ACu>(ctx);
}

loc_8003C698:
{
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r26 = (r26_rot_2 & 254);
    r27 = (r27 + 1);
}

loc_8003C6A0:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_8003C6A8:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_8003C660;
    }
}

loc_8003C6AC:
{
    goto loc_8003C6B8;
}

loc_8003C6B0:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80171B38u>(ctx);
}

loc_8003C6B8:
{
    r0 = MemoryInline::FlatRead16(r30);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r3 = (r3_rot_1 & 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80172858u>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016F3B8u>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016F3E0u>(ctx);
    r3 = MemoryInline::FlatRead8((r30 + 92));
    r4 = MemoryInline::FlatRead8((r30 + 93));
    r5 = MemoryInline::FlatRead8((r30 + 94));
    r6 = MemoryInline::FlatRead8((r30 + 95));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017277Cu>(ctx);
    r0 = MemoryInline::FlatRead16(r30);
    r4 = MemoryInline::FlatRead8((r30 + 112));
    r3 = (r0 & 1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r5 = (r5_rot_0 & 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80172824u>(ctx);
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003C704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003C750;
    }
}

loc_8003C708:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 112), 0, 24u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r31 + 132));
    r4 = (r1 + 20);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r31 + 133));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r31 + 134));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r31 + 135));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r3));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 116));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r6));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 120));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r5));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 124));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 128));
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 112));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x801722CCu>(ctx);
    goto loc_8003C774;
}

loc_8003C750:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30256));
    r4 = (r1 + 16);
    f3.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f4.d = f2.d;
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x801722CCu>(ctx);
}

loc_8003C774:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 68));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0007FF gpr_write=0xFE000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8003C4A0 func_8003C4A0 preserves=true fpr_mask=0x00000000
