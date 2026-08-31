#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F63A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t cr6_0 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F63A0;

loc_801F63A0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r7 = 0x80360000u;
    r0 = 0;
    r7 = (r7 + -20912);
    MemoryInline::FlatWrite32(r5, r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r3));
}

loc_801F63C8:
{
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801F63EC;
    }
}

loc_801F63DC:
{
    r5 = (r7 + 131072);
    r0 = (r5 + 32072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801F63E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F63F4;
    }
}

loc_801F63EC:
{
    r3 = 10;
    goto loc_801F65A4;
}

loc_801F63F4:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F63F8:
{
    if (((cr & 0x00000020u) != 0)) {
        goto loc_801F642C;
    }
}

loc_801F63FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801F6404:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F642C;
    }
}

loc_801F6408:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F6410:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F642C;
    }
}

loc_801F6414:
{
    r0 = MemoryInline::FlatRead32(r5);
    r7 = (r0 & 1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801F6420:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801F642C;
    }
}

loc_801F6424:
{
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F6428:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6434;
    }
}

loc_801F642C:
{
    r3 = 38;
    goto loc_801F65A4;
}

loc_801F6434:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801F643C;
    }
}

loc_801F6438:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6444;
    }
}

loc_801F643C:
{
    r3 = 38;
    goto loc_801F65A4;
}

loc_801F6444:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_801F6450;
    }
}

loc_801F6448:
{
    r31 = 0;
    goto loc_801F6454;
}

loc_801F6450:
{
    r31 = MemoryInline::FlatRead32((r5 + 612));
}

loc_801F6454:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801F6458:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6464;
    }
}

loc_801F645C:
{
    r3 = 38;
    goto loc_801F65A4;
}

loc_801F6464:
{
    r10 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    r0 = -1;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 40));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 24), r10);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    MemoryInline::FlatWriteRam32((r1 + 28), r9);
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F6494:
{
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F64C8;
    }
}

loc_801F64A8:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801F64B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F64C8;
    }
}

loc_801F64B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F64BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F64C8;
    }
}

loc_801F64C0:
{
    r3 = 6;
    goto loc_801F65A4;
}

loc_801F64C8:
{
    r5 = MemoryInline::FlatRead32((r27 + 8));
    r3 = r27;
    r0 = MemoryInline::FlatRead32((r5 + 608));
    r4 = (r0 + r4);
    ctx->lr = 0x801F64DCu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80200304u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r27 + 32));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801F64E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F64FC;
    }
}

loc_801F64EC:
{
    r0 = 0;
    r3 = 37;
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_801F65A4;
}

loc_801F64FC:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r5 = r28;
    r4 = MemoryInline::FlatRead32((r27 + 40));
    r6 = r30;
    r3 = (r3 + 4);
    r7 = (r1 + 8);
    ctx->lr = 0x801F6518u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC34Cu>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F651C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6554;
    }
}

loc_801F6520:
{
    r8 = MemoryInline::FlatRead32((r1 + 24));
    r7 = MemoryInline::FlatRead32((r1 + 28));
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r5 = MemoryInline::FlatRead32((r1 + 36));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32((r27 + 32), r8);
    MemoryInline::FlatWrite32((r27 + 36), r7);
    MemoryInline::FlatWrite32((r27 + 40), r6);
    MemoryInline::FlatWrite32((r27 + 44), r5);
    MemoryInline::FlatWrite32((r27 + 12), r4);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_801F65A4;
}

loc_801F6554:
{
    r7 = MemoryInline::FlatRead32((r1 + 24));
    r6 = MemoryInline::FlatRead32((r1 + 28));
    r5 = MemoryInline::FlatRead32((r1 + 32));
    r4 = MemoryInline::FlatRead32((r1 + 36));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32((r27 + 32), r7);
    MemoryInline::FlatWrite32((r27 + 36), r6);
    MemoryInline::FlatWrite32((r27 + 40), r5);
    MemoryInline::FlatWrite32((r27 + 44), r4);
    MemoryInline::FlatWrite32((r27 + 12), r3);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r31 + 32));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_801F6594:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F659C;
    }
}

loc_801F6598:
{
    r0 = r28;
}

loc_801F659C:
{
    MemoryInline::FlatWrite32(r29, r0);
    r3 = 0;
}

loc_801F65A4:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F63A0 func_801F63A0 preserves=true fpr_mask=0x00000000
