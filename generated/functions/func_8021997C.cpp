#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021997C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8021997C;

loc_8021997C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 8u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
}

loc_80219984:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(89))) {
        goto loc_802199A8;
    }
}

loc_80219988:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_80219990:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(97))) {
        goto loc_802199A8;
    }
}

loc_80219994:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
}

loc_8021999C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(122))) {
        goto loc_802199A8;
    }
}

loc_802199A0:
{
    r0 = 1;
    goto loc_802199FC;
}

loc_802199A8:
{
}

loc_802199AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(65))) {
        goto loc_802199D0;
    }
}

loc_802199B0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_802199B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(83))) {
        goto loc_802199D0;
    }
}

loc_802199BC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
}

loc_802199C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(72))) {
        goto loc_802199D0;
    }
}

loc_802199C8:
{
    r0 = 2;
    goto loc_802199FC;
}

loc_802199D0:
{
}

loc_802199D4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(65))) {
        goto loc_802199F8;
    }
}

loc_802199D8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_802199E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(83))) {
        goto loc_802199F8;
    }
}

loc_802199E4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
}

loc_802199EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(82))) {
        goto loc_802199F8;
    }
}

loc_802199F0:
{
    r0 = 3;
    goto loc_802199FC;
}

loc_802199F8:
{
    r0 = 0;
}

loc_802199FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80219A00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80219A18;
    }
}

loc_80219A04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80219A08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80219A3C;
    }
}

loc_80219A0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80219A10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80219A58;
    }
}

loc_80219A14:
{
    goto loc_80219A74;
}

loc_80219A18:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & -65536);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4_mrot_0 = (r4_rot_0 & 65280);
    r4_mdest_0 = (r4 & -65281);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_2 = (r0_rot_5 & -16777216);
    r0_mdest_2 = (r0 & 16777215);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r3 = (r4 | r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80219A3C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0_mrot_1 = (r0_rot_3 & 16711680);
    r0_mdest_1 = (r0 & -16711681);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r3 = (r3 | r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80219A58:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0_mrot_0 = (r0_rot_1 & 16711680);
    r0_mdest_0 = (r0 & -16711681);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r3 = (r3 | r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80219A74:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021997C func_8021997C preserves=true fpr_mask=0x00000000
