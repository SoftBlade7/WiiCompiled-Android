#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80536328(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80536328;

loc_80536328:
{
    r4 = 0x809C0000u;
    r31 = 1;
    r4 = MemoryInline::FlatRead32((r4 + -10520));
    r29 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80536340:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8053634C;
    }
}

loc_80536344:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80536350;
}

loc_8053634C:
{
    r0 = 0;
}

loc_80536350:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80536354:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80536360;
    }
}

loc_80536358:
{
    r30 = 0;
    goto loc_80536558;
}

loc_80536360:
{
    r4 = 0x809C0000u;
    r30 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = (r6 * 240);
    r7 = 0;
    r9 = (r4 + 40);
    r4 = (r9 + r0);
    r5 = 0;
    r8 = MemoryInline::FlatRead32((r4 + 204));
    ctr = r6;
}

loc_8053638C:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_805363B8;
    }
}

loc_80536390:
{
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r4 = (r9 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_805363A4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_805363B0;
    }
}

loc_805363A8:
{
    r0 = (r7 + 1);
    r7 = (r0 & 255);
}

loc_805363B0:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80536390;
    }
}

loc_805363B8:
{
}

loc_805363BC:
{
    r5 = 0;
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(1))) {
        goto loc_805363C8;
    }
}

loc_805363C4:
{
    r5 = 6;
}

loc_805363C8:
{
    r4 = MemoryInline::FlatRead8((r3 + 36));
    r3 = 715849728;
    r0 = (r3 + -21845);
    r28 = 0;
    r4 = (r4 + r7);
    r25 = 0x809C0000u;
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 6);
    r0 = (r4 - r0);
    r0 = (r5 + r0);
    r24 = (r0 & 255);
    goto loc_80536424;
}

loc_80536400:
{
    r4 = (r28 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r0));
}

loc_80536414:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80536420;
    }
}

loc_80536418:
{
    r30 = r28;
    goto loc_80536558;
}

loc_80536420:
{
    r28 = (r28 + 1);
}

loc_80536424:
{
    r3 = MemoryInline::FlatRead32((r25 + -10520));
    r5 = (r28 & 255);
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80536434:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80536440;
    }
}

loc_80536438:
{
    r0 = 0;
    goto loc_80536444;
}

loc_80536440:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_80536444:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80536448:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80536400;
    }
}

loc_8053644C:
{
}

loc_80536558:
{
    r3 = 0x809C0000u;
    r4 = (r30 & 255);
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053656C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80536588;
    }
}

loc_80536570:
{
    r4 = r26;
    r5 = r27;
    r6 = r31;
    r7 = (r29 & 255);
    ctx->lr = 0x80536584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805365B0;
}

loc_80536588:
{
    r4 = 0x80890000u;
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 336));
    MemoryInline::FlatWriteFloat32((r26 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 380));
    MemoryInline::FlatWriteFloat32((r26 + 4), f1.d);
    MemoryInline::FlatWriteFloat32(r26, f1.d);
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 8), f1.d);
}

loc_805365B0:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF8003FF gpr_write=0xFF800BFB gpr_return=0x00000018 fpr_read=0xF80003FF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80536328 func_80536328 preserves=true fpr_mask=0x00000000
