#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D5BD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D5BD4;

loc_801D5BD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r6));
}

loc_801D5BD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D5BE4;
    }
}

loc_801D5BDC:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801D5BE4:
{
    r7 = (r4 - r6);
    r4 = r3;
    r10 = (r7 + 1);
    r11 = 0;
    goto loc_801D5C70;
}

loc_801D5BF8:
{
    r7 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8(r4);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801D5C0C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_801D5C68;
    }
}

loc_801D5C10:
{
    r7 = (r3 + r11);
    r0 = (r6 + -1);
    r8 = (r7 + 1);
    r12 = 1;
    r7 = (r5 + 1);
    ctr = r0;
}

loc_801D5C2C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(1))) {
        goto loc_801D5C58;
    }
}

loc_801D5C30:
{
    r9 = MemoryInline::FlatRead8(r8);
    r0 = MemoryInline::FlatRead8(r7);
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801D5C44:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(r0))) {
        goto loc_801D5C58;
    }
}

loc_801D5C48:
{
    r12 = (r12 + 1);
    r7 = (r7 + 1);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D5C30;
    }
}

loc_801D5C58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r6));
}

loc_801D5C5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D5C68;
    }
}

loc_801D5C60:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801D5C68:
{
    r11 = (r11 + 1);
    r4 = (r4 + 1);
}

loc_801D5C70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r10));
}

loc_801D5C74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801D5BF8;
    }
}

loc_801D5C78:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001BF9 gpr_write=0x00001F99 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D5BD4 func_801D5BD4 preserves=true fpr_mask=0x00000000
