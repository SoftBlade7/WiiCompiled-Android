#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F458C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F458C;

loc_800F458C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F4590:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F45A4;
    }
}

loc_800F4594:
{
    r0 = 63;
    r3 = 0;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_800F45A4:
{
    r7 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(127));
}

loc_800F45AC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800F45C0;
    }
}

loc_800F45B0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r3 = 1;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_800F45C0:
{
    r0 = (r7 & 224);
}

loc_800F45C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(192))) {
        goto loc_800F460C;
    }
}

loc_800F45CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_800F45D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F45E4;
    }
}

loc_800F45D4:
{
    r0 = 63;
    r3 = 0;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_800F45E4:
{
    r5 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (r5 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(128));
}

loc_800F45F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F4670;
    }
}

loc_800F45F4:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(6));
    r3 = (r3_rot_0 & 1984);
    r0 = (r5 & 63);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_800F460C:
{
    r0 = (r7 & 240);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(224));
}

loc_800F4614:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F4670;
    }
}

loc_800F4618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_800F461C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F4630;
    }
}

loc_800F4620:
{
    r0 = 63;
    r3 = 0;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_800F4630:
{
    r5 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (r5 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(128));
}

loc_800F463C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F4670;
    }
}

loc_800F4640:
{
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r3 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(128));
}

loc_800F464C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F4670;
    }
}

loc_800F4650:
{
    r6 = (r3 & 63);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(12));
    r0 = (r0_rot_0 & 61440);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
    r5 = (r5_rot_0 & 4032);
    r3 = 3;
    r0 = (r6 + r0);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_800F4670:
{
    r0 = 63;
    r3 = 1;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000B9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F458C func_800F458C preserves=true fpr_mask=0x00000000
