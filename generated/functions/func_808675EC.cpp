#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808675EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808675EC;

loc_808675EC:
{
    r7 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
}

loc_808675F4:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_return;
    }
}

loc_808675F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 38));
    r5 = (r7 + r0);
    r8 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
}

loc_80867608:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_8086760C:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80867618;
    }
}

loc_80867610:
{
    r0 = 0;
    goto loc_80867658;
}

loc_80867618:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80867624;
    }
}

loc_8086761C:
{
    r0 = 0;
    goto loc_80867658;
}

loc_80867624:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80867630;
    }
}

loc_80867628:
{
    r6 = -1;
    goto loc_8086763C;
}

loc_80867630:
{
    r6 = -1;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8086763C;
    }
}

loc_80867638:
{
    r6 = (r4 - r7);
}

loc_8086763C:
{
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r5 = (r5 & r0);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_80867658:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086765C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80867660:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
}

loc_80867664:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80867670;
    }
}

loc_80867668:
{
    r5 = -1;
    goto loc_80867680;
}

loc_80867670:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
}

loc_80867674:
{
    r5 = -1;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80867680;
    }
}

loc_8086767C:
{
    r5 = (r4 - r7);
}

loc_80867680:
{
    r0 = 1;
    r4 = MemoryInline::FlatRead16((r3 + 36));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r6 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
    r0 = (r6 & ~r5);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808675EC func_808675EC preserves=true fpr_mask=0x00000000
