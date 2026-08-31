#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020BC18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020BC18;

loc_8020BC18:
{
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_8020BC20:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(4085))) {
        goto loc_8020BC50;
    }
}

loc_8020BC24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020BC28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020BC48;
    }
}

loc_8020BC2C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0 = (r0 - r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r4 = (r6 + r0);
    r0 = (r4 + -1);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_8020BC48:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8020BC50:
{
}

loc_8020BC54:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(65525))) {
        goto loc_8020BC7C;
    }
}

loc_8020BC58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020BC5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020BC74;
    }
}

loc_8020BC60:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = (r6 + r0);
    r0 = (r4 + -1);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_8020BC74:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8020BC7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020BC80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020BC98;
    }
}

loc_8020BC84:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = (r6 + r0);
    r0 = (r4 + -1);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_8020BC98:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020BC18 func_8020BC18 preserves=true fpr_mask=0x00000000
