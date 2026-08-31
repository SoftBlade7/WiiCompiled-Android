#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065AB8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065AB8C;

loc_8065AB8C:
{
    r5 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 128u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8065AB98:
{
    r0 = 255;
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r5);
    r7 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r5);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r5);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r5);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r5);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r5);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r5);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r5);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r5);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r5);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r5);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r5);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r5);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r5);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r5);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r5);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r5);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r5);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r5);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r5);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r5);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r5);
    MemoryInline::WriteResolved8(guest_range_0, 104u, (r3 + 104), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r5);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r5);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r5);
    }
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AC20;
    }
}

loc_8065AC14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8065AC18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AC54;
    }
}

loc_8065AC1C:
{
    goto loc_8065AC84;
}

loc_8065AC20:
{
    r6 = 0x809C0000u;
    r5 = 3;
    r8 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = -1;
    r6 = MemoryInline::FlatRead32((r8 + 10524));
    r6 = (r6 * 88);
    r6 = (r8 + r6);
    r6 = MemoryInline::FlatRead32((r6 + 68));
    MemoryInline::FlatWrite8((r8 + 9705), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r8 + 9706), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r8 + 9707), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r8 + 9704), static_cast<uint8_t>(r0));
    goto loc_8065AC84;
}

loc_8065AC54:
{
    r6 = 0x809C0000u;
    r5 = 4;
    r8 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = -1;
    r6 = MemoryInline::FlatRead32((r8 + 10524));
    r6 = (r6 * 88);
    r6 = (r8 + r6);
    r6 = MemoryInline::FlatRead32((r6 + 68));
    MemoryInline::FlatWrite8((r8 + 9705), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r8 + 9706), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r8 + 9707), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r8 + 9704), static_cast<uint8_t>(r0));
}

loc_8065AC84:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r4);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065AB8C func_8065AB8C preserves=true fpr_mask=0x00000000
