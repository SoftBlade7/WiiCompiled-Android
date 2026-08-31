#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80860F98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80860F98;

loc_80860F98:
{
    r0 = (r3 + -3);
    r6 = 0;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r30 = (r30_rot_0 & 134217727);
    r29 = (r3 - r30);
    r3 = 2;
    r4 = r29;
    r5 = r30;
    ctx->lr = 0x80860FBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054FC44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80860FC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860FCC;
    }
}

loc_80860FC4:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80860FCC:
{
    r0 = (r29 + r30);
    r3 = 0;
    r0 = (r0 * 896);
    r4 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 118));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80860FE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80860FE8:
{
    r0 = MemoryInline::FlatRead32((r4 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80860FF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80860FF4:
{
    r0 = MemoryInline::FlatRead8((r4 + 230));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80860FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861000:
{
    r0 = MemoryInline::FlatRead32((r4 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80861008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_8086100C:
{
    r3 = 1;
}

loc_80862738:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001F9B gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80860F98 func_80860F98 preserves=true fpr_mask=0x00000000
