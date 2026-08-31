#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80861C50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80861C50;

loc_80861C50:
{
    r3 = 9;
    r4 = 0;
    ctx->lr = 0x80861C5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861C60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861C6C;
    }
}

loc_80861C64:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861C6C:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861C7C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861C9C;
    }
}

loc_80861C80:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80861CA0;
}

loc_80861C9C:
{
    r3 = 0;
}

loc_80861CA0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 566), 0, 350u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 566));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861CA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861CB8;
    }
}

loc_80861CAC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r3 + 576));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861CB4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861CC0;
    }
}

loc_80861CB8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861CC0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 112u, (r3 + 678));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861CC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861CD8;
    }
}

loc_80861CCC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 122u, (r3 + 688));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861CD4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861CE0;
    }
}

loc_80861CD8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861CE0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 224u, (r3 + 790));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861CE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861CF8;
    }
}

loc_80861CEC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 234u, (r3 + 800));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861CF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861D00;
    }
}

loc_80861CF8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861D00:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 336u, (r3 + 902));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861D08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861D18;
    }
}

loc_80861D0C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 346u, (r3 + 912));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861D14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861D20;
    }
}

loc_80861D18:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861D20:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80861C50 func_80861C50 preserves=true fpr_mask=0x00000000
