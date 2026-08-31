#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081CB70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8081CB70;

loc_8081CB70:
{
    r4 = 0x808B0000u;
    r0 = 2;
    r4 = (r4 + -19104);
    r6 = 0;
    r5 = (r4 + 528);
    ctr = r0;
}

loc_8081CB88:
{
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CB90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CB9C;
    }
}

loc_8081CB94:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CB9C:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CBA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CBB0;
    }
}

loc_8081CBA8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CBB0:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CBB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CBC4;
    }
}

loc_8081CBBC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CBC4:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CBCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CBD8;
    }
}

loc_8081CBD0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CBD8:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CBE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CBEC;
    }
}

loc_8081CBE4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CBEC:
{
    r0 = MemoryInline::FlatRead32((r5 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CBF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CC00;
    }
}

loc_8081CBF8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CC00:
{
    r5 = (r5 + 24);
    r6 = (r6 + 5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8081CB88;
    }
}

loc_8081CC0C:
{
    r0 = 2;
    r5 = (r4 + 576);
    r6 = 0;
    ctr = r0;
}

loc_8081CC1C:
{
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CC24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CC30;
    }
}

loc_8081CC28:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CC30:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CC38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CC44;
    }
}

loc_8081CC3C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CC44:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CC4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CC58;
    }
}

loc_8081CC50:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CC58:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CC60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CC6C;
    }
}

loc_8081CC64:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CC6C:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CC74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CC80;
    }
}

loc_8081CC78:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CC80:
{
    r0 = MemoryInline::FlatRead32((r5 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CC88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CC94;
    }
}

loc_8081CC8C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CC94:
{
    r5 = (r5 + 24);
    r6 = (r6 + 5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8081CC1C;
    }
}

loc_8081CCA0:
{
    r0 = 2;
    r4 = (r4 + 624);
    r5 = 0;
    ctr = r0;
}

loc_8081CCB0:
{
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CCB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CCC4;
    }
}

loc_8081CCBC:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CCC4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CCCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CCD8;
    }
}

loc_8081CCD0:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CCD8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CCE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CCEC;
    }
}

loc_8081CCE4:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CCEC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CCF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CD00;
    }
}

loc_8081CCF8:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CD00:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CD08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CD14;
    }
}

loc_8081CD0C:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CD14:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8081CD1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081CD28;
    }
}

loc_8081CD20:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8081CD28:
{
    r4 = (r4 + 24);
    r5 = (r5 + 5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8081CCB0;
    }
}

loc_8081CD34:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081CB70 func_8081CB70 preserves=true fpr_mask=0x00000000
