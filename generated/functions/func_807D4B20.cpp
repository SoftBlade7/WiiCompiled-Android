#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D4B20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807D4B20;

loc_807D4B20:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r0 = MemoryInline::FlatRead32((r3 + 288));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    ctx->lr = 0x807D4B54u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32(r27, r3);
    r0 = MemoryInline::FlatRead32((r26 + 288));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    ctx->lr = 0x807D4B64u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32(r28, r3);
    r0 = MemoryInline::FlatRead32((r26 + 288));
    r3 = (r0 * 12);
    ctx->lr = 0x807D4B74u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32(r30, r3);
    r0 = MemoryInline::FlatRead32((r26 + 288));
    r3 = (r0 * 12);
    ctx->lr = 0x807D4B84u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80240000u;
    MemoryInline::FlatWrite32(r31, r3);
    r3 = (r4 + 28832);
    r6 = 0;
    r4 = 0;
    r5 = 0;
    r7 = 36;
    goto loc_807D4CE4;
}

loc_807D4BA4:
{
    r8 = r26;
    r10 = 36;
    r11 = 2;
    r0 = 36;
    r12 = 0;
    ctr = r9;
}

loc_807D4BC0:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(0))) {
        goto loc_807D4BF8;
    }
}

loc_807D4BC4:
{
    r9 = MemoryInline::FlatRead32(r8);
    r25 = MemoryInline::FlatRead32((r8 + 144));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(r10));
}

loc_807D4BD0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D4BE0;
    }
}

loc_807D4BD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D4BEC;
    }
}

loc_807D4BD8:
{
}

loc_807D4BDC:
{
    if ((static_cast<uint32_t>(r25) >= static_cast<uint32_t>(r11))) {
        goto loc_807D4BEC;
    }
}

loc_807D4BE0:
{
    r10 = r9;
    r11 = r25;
    r0 = r12;
}

loc_807D4BEC:
{
    r8 = (r8 + 4);
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807D4BC4;
    }
}

loc_807D4BF8:
{
    r8 = MemoryInline::FlatRead32(r27);
}

loc_807D4C00:
{
    r8_addr_2 = (r8 + r4);
    MemoryInline::FlatWrite32(r8_addr_2, r10);
    r8 = MemoryInline::FlatRead32(r28);
    r8_addr_3 = (r8 + r4);
    MemoryInline::FlatWrite32(r8_addr_3, r11);
    if ((static_cast<uint32_t>(r11) != static_cast<uint32_t>(1))) {
        goto loc_807D4C34;
    }
}

loc_807D4C10:
{
    r8 = (r0 * 12);
    r8 = (r26 + r8);
    r10 = MemoryInline::FlatRead32((r8 + 292));
    r9 = MemoryInline::FlatRead32((r8 + 296));
    r8 = MemoryInline::FlatRead32((r8 + 300));
    MemoryInline::FlatWriteRam32((r1 + 8), r10);
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    MemoryInline::FlatWriteRam32((r1 + 16), r8);
    goto loc_807D4C4C;
}

loc_807D4C34:
{
    r10 = MemoryInline::FlatRead32(r3);
    r9 = MemoryInline::FlatRead32((r3 + 4));
    r8 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r10);
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    MemoryInline::FlatWriteRam32((r1 + 16), r8);
}

loc_807D4C4C:
{
    r9 = MemoryInline::FlatRead32(r30);
}

loc_807D4C54:
{
    r8 = MemoryInline::FlatRead32((r1 + 8));
    r10 = (r9 + r5);
    r9 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r10, r8);
    r8 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r10 + 4), r9);
    MemoryInline::FlatWrite32((r10 + 8), r8);
    if ((static_cast<uint32_t>(r11) != static_cast<uint32_t>(2))) {
        goto loc_807D4C98;
    }
}

loc_807D4C74:
{
    r8 = (r0 * 12);
    r8 = (r26 + r8);
    r10 = MemoryInline::FlatRead32((r8 + 724));
    r9 = MemoryInline::FlatRead32((r8 + 728));
    r8 = MemoryInline::FlatRead32((r8 + 732));
    MemoryInline::FlatWriteRam32((r1 + 20), r10);
    MemoryInline::FlatWriteRam32((r1 + 24), r9);
    MemoryInline::FlatWriteRam32((r1 + 28), r8);
    goto loc_807D4CB0;
}

loc_807D4C98:
{
    r10 = MemoryInline::FlatRead32(r3);
    r9 = MemoryInline::FlatRead32((r3 + 4));
    r8 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r10);
    MemoryInline::FlatWriteRam32((r1 + 24), r9);
    MemoryInline::FlatWriteRam32((r1 + 28), r8);
}

loc_807D4CB0:
{
    r9 = MemoryInline::FlatRead32(r31);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r8 = MemoryInline::FlatRead32((r1 + 20));
    r6 = (r6 + 1);
    r10 = (r9 + r5);
    r9 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWrite32(r10, r8);
    r4 = (r4 + 4);
    r8 = MemoryInline::FlatRead32((r1 + 28));
    r5 = (r5 + 12);
    MemoryInline::FlatWrite32((r10 + 4), r9);
    MemoryInline::FlatWrite32((r10 + 8), r8);
    r26_addr_2 = (r26 + r0);
    MemoryInline::FlatWrite32(r26_addr_2, r7);
}

loc_807D4CE4:
{
    r9 = MemoryInline::FlatRead32((r26 + 288));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r9));
}

loc_807D4CEC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D4BA4;
    }
}

loc_807D4CF0:
{
    MemoryInline::FlatWrite32(r29, r9);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
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
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D4B20 func_807D4B20 preserves=true fpr_mask=0x00000000
