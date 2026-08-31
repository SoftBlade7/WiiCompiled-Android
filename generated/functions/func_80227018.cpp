#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80227018(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80227018;

loc_80227018:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 25u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r3 + 28));
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = (r0 & 1);
}

loc_80227024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227030;
    }
}

loc_80227028:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 24));
    goto loc_80227034;
}

loc_80227030:
{
    r0 = 0;
}

loc_80227034:
{
    r5 = MemoryInline::FlatRead32(r4);
}

loc_8022703C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80227044;
    }
}

loc_80227040:
{
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80227044:
{
    r5 = MemoryInline::FlatRead32(r4);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
}

loc_80227050:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80227060;
    }
}

loc_80227058:
{
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
}

loc_80227060:
{
    r7 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 4));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80227070:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 7));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022709C;
    }
}

loc_8022708C:
{
    MemoryInline::FlatWrite8((r7 + 20), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r7 + 21), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 22), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r7 + 23), static_cast<uint8_t>(r0));
}

loc_8022709C:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227018 func_80227018 preserves=true fpr_mask=0x00000000
