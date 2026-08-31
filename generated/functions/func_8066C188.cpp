#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066C188(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066C188;

loc_8066C188:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    }
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066C1AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C2D0;
    }
}

loc_8066C1B0:
{
    r3 = 0x809C0000u;
    r30 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r31 = (r3 + 131072);
}

loc_8066C1C0:
{
    r0 = MemoryInline::FlatRead32((r27 + 16884));
}

loc_8066C1C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066C208;
    }
}

loc_8066C1CC:
{
    r3 = (r27 + 65536);
    r0 = MemoryInline::FlatRead32((r27 + 88));
    r3 = MemoryInline::FlatRead32((r3 + -29952));
}

loc_8066C1DC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_8066C208;
    }
}

loc_8066C1E0:
{
    r0 = MemoryInline::FlatRead8((r27 + 85));
}

loc_8066C1E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8066C1F8;
    }
}

loc_8066C1EC:
{
}

loc_8066C1F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8066C200;
    }
}

loc_8066C1F4:
{
    goto loc_8066C208;
}

loc_8066C1F8:
{
    r0 = 1;
    goto loc_8066C20C;
}

loc_8066C200:
{
    r0 = 2;
    goto loc_8066C20C;
}

loc_8066C208:
{
    r0 = 3;
}

loc_8066C20C:
{
}

loc_8066C210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8066C21C;
    }
}

loc_8066C214:
{
}

loc_8066C218:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8066C2BC;
    }
}

loc_8066C21C:
{
    r3 = (r27 + 65536);
    r4 = MemoryInline::FlatRead32((r27 + 88));
    r0 = MemoryInline::FlatRead32((r3 + -29952));
    r26 = (r4 - r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r0));
}

loc_8066C230:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066C2C8;
    }
}

loc_8066C234:
{
    r3 = MemoryInline::FlatRead32((r31 + 20476));
    r4 = r26;
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80548B8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8066C250:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C260;
    }
}

loc_8066C254:
{
    MemoryInline::FlatWrite32(r28, r26);
    r3 = 1;
    goto loc_8066C2D4;
}

loc_8066C260:
{
}

loc_8066C264:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8066C2BC;
    }
}

loc_8066C268:
{
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r31 + 20476));
    r0 = (r0 * 900);
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8066C288:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8066C294;
    }
}

loc_8066C28C:
{
    r3 = (r3 + 12);
    goto loc_8066C298;
}

loc_8066C294:
{
    r3 = 0;
}

loc_8066C298:
{
    r0 = MemoryInline::FlatRead8((r3 + 420));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_8066C2A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C2B0;
    }
}

loc_8066C2A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 196));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_8066C2AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066C2BC;
    }
}

loc_8066C2B0:
{
    MemoryInline::FlatWrite32(r28, r26);
    r3 = 1;
    goto loc_8066C2D4;
}

loc_8066C2BC:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(10));
}

loc_8066C2C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066C1C0;
    }
}

loc_8066C2C8:
{
    r3 = 0;
    goto loc_8066C2D4;
}

loc_8066C2D0:
{
    r3 = 0;
}

loc_8066C2D4:
{
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC00007B gpr_write=0xFC00007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066C188 func_8066C188 preserves=true fpr_mask=0x00000000
