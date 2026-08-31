#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80068770(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80068770;

loc_80068770:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
}

loc_80068778:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8006878C;
    }
}

loc_8006877C:
{
    r0 = (r5 * 260);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80068794;
}

loc_8006878C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80068794:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
}

loc_8006879C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800687B0;
    }
}

loc_800687A0:
{
    r0 = (r5 * 100);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_800687B8;
}

loc_800687B0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_800687B8:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
}

loc_800687C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800687D4;
    }
}

loc_800687C4:
{
    r0 = (r5 * 584);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    goto loc_800687DC;
}

loc_800687D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 40), r0);
}

loc_800687DC:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
}

loc_800687E4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800687F8;
    }
}

loc_800687E8:
{
    r0 = (r5 * 40);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    goto loc_80068800;
}

loc_800687F8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 28), r0);
}

loc_80068800:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
}

loc_80068808:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8006881C;
    }
}

loc_8006880C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80068824;
}

loc_8006881C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_80068824:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
}

loc_8006882C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80068840;
    }
}

loc_80068830:
{
    r0 = (r5 * 12);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    goto loc_80068848;
}

loc_80068840:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 36), r0);
}

loc_80068848:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
}

loc_80068850:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80068864;
    }
}

loc_80068854:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_8006886C;
}

loc_80068864:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_8006886C:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
}

loc_80068874:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80068888;
    }
}

loc_80068878:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r0 = (r0_rot_5 & -128);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_80068890;
}

loc_80068888:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80068890:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
}

loc_80068898:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800688AC;
    }
}

loc_8006889C:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
    r0 = (r0_rot_7 & -64);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_800688B4;
}

loc_800688AC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r0);
}

loc_800688B4:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
}

loc_800688BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800688D0;
    }
}

loc_800688C0:
{
    r0 = (r5 * 160);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    goto loc_800688D8;
}

loc_800688D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r0);
}

loc_800688D8:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
}

loc_800688E0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800688F4;
    }
}

loc_800688E4:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(9));
    r0 = (r0_rot_9 & -512);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_800688FC;
}

loc_800688F4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_800688FC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80068904:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006891C;
    }
}

loc_80068908:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 44), r0);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8006891C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 52));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r4 + 56));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r4 + 60));
    MemoryInline::FlatWrite32((r3 + 52), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80068770 func_80068770 preserves=true fpr_mask=0x00000000
