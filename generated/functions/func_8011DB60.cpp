#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011DB60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011DB60;

loc_8011DB60:
{
    r6 = 0x80270000u;
    r8 = MemoryInline::FlatRead32(r3);
    r6 = (r6 + 4424);
    r5 = -1664090112;
    r7 = MemoryInline::FlatRead32((r6 + 56));
    r6 = (r5 + -27879);
    r3 = 0;
    goto loc_8011DBB8;
}

loc_8011DB80:
{
    r5 = (r3 * r6);
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r0 = 0;
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(0))) {
        goto loc_8011DB98;
    }
}

loc_8011DB90:
{
}

loc_8011DB94:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(256))) {
        goto loc_8011DB9C;
    }
}

loc_8011DB98:
{
    r0 = 1;
}

loc_8011DB9C:
{
}

loc_8011DBA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011DBA8;
    }
}

loc_8011DBA4:
{
    goto loc_8011DBB0;
}

loc_8011DBA8:
{
    r3 = MemoryInline::FlatRead32((r7 + 16));
    r3_addr_2 = (r3 + r9);
    r9 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_8011DBB0:
{
    r3 = (r5 + r9);
    r8 = (r8 + 1);
}

loc_8011DBB8:
{
    r9 = MemoryInline::FlatRead8(r8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011DB80;
    }
}

loc_8011DBC4:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r3 = (r3 - r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003B9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011DB60 func_8011DB60 preserves=true fpr_mask=0x00000000
