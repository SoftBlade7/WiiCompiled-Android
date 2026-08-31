#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086107C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;

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

    goto loc_8086107C;

loc_8086107C:
{
    r4 = (r3 + -11);
    r0 = (r3 + -8);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = 6;
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r29 = (r29_rot_0 & 134217727);
    r6 = 0;
    r30 = (r0 - r29);
    r4 = r30;
    r5 = r29;
    ctx->lr = 0x808610A4u;
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

loc_808610A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808610B4;
    }
}

loc_808610AC:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808610B4:
{
    r0 = (r30 + r29);
    r3 = 0;
    r0 = (r0 * 896);
    r4 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 566));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808610CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808610D0:
{
    r0 = MemoryInline::FlatRead32((r4 + 580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_808610D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808610DC:
{
    r0 = MemoryInline::FlatRead8((r4 + 678));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808610E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808610E8:
{
    r0 = MemoryInline::FlatRead32((r4 + 692));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_808610F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808610F4:
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
// RECOMP_REGISTRATION base 0x8086107C func_8086107C preserves=true fpr_mask=0x00000000
