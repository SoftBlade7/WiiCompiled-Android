#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065BACC(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8065BACC;

loc_8065BACC:
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
    r27 = (r3 + 4);
    r26 = 0;
    r30 = 0;
    r31 = 16;
    r29 = 0x809C0000u;
    r28 = 2;
}

loc_8065BAF4:
{
    r0 = MemoryInline::FlatRead8((r27 + 26));
}

loc_8065BAFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_8065BB70;
    }
}

loc_8065BB00:
{
    r0 = MemoryInline::FlatRead8((r27 + 25));
}

loc_8065BB08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8065BB18;
    }
}

loc_8065BB0C:
{
}

loc_8065BB10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8065BB34;
    }
}

loc_8065BB14:
{
    goto loc_8065BB70;
}

loc_8065BB18:
{
    r3 = MemoryInline::FlatRead32((r29 + -10448));
    r4 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_8065BB28:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8065BB70;
    }
}

loc_8065BB2C:
{
    MemoryInline::FlatWrite8((r27 + 25), static_cast<uint8_t>(r28));
    goto loc_8065BB70;
}

loc_8065BB34:
{
    r3 = MemoryInline::FlatRead32((r29 + -10448));
    r4 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r4 + 200);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8065BB48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8065BB70;
    }
}

loc_8065BB4C:
{
    MemoryInline::FlatWrite32(r27, r30);
    r3 = (r27 + 4);
    r4 = 0;
    r5 = 21;
    MemoryInline::FlatWrite8((r27 + 25), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r27 + 26), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r27 + 27), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r27 + 28), static_cast<uint8_t>(r30));
    ctx->lr = 0x8065BB70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8065BB70:
{
    r26 = (r26 + 1);
    r27 = (r27 + 32);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
}

loc_8065BB7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065BAF4;
    }
}

loc_8065BB80:
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
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xFC0000FB gpr_write=0xFC0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8065BACC func_8065BACC preserves=true fpr_mask=0x00000000
