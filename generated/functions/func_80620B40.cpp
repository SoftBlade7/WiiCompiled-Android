#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80620B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80620B40;

loc_80620B40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 21u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 20));
}

loc_80620B60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80620B6C;
    }
}

loc_80620B64:
{
    r0 = 0;
    goto loc_80620BFC;
}

loc_80620B6C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
}

loc_80620B74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80620B80;
    }
}

loc_80620B78:
{
    r0 = 1;
    goto loc_80620BFC;
}

loc_80620B80:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
}

loc_80620B88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80620B94;
    }
}

loc_80620B8C:
{
    r0 = 1;
    goto loc_80620BFC;
}

loc_80620B94:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_80620B9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80620BA8;
    }
}

loc_80620BA0:
{
    r0 = 1;
    goto loc_80620BFC;
}

loc_80620BA8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
}

loc_80620BB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80620BBC;
    }
}

loc_80620BB4:
{
    r0 = 1;
    goto loc_80620BFC;
}

loc_80620BBC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
}

loc_80620BC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80620BD0;
    }
}

loc_80620BC8:
{
    r0 = 1;
    goto loc_80620BFC;
}

loc_80620BD0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
}

loc_80620BD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80620BE4;
    }
}

loc_80620BDC:
{
    r0 = 1;
    goto loc_80620BFC;
}

loc_80620BE4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
}

loc_80620BEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80620BF8;
    }
}

loc_80620BF0:
{
    r0 = 1;
    goto loc_80620BFC;
}

loc_80620BF8:
{
    r0 = 0;
}

loc_80620BFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80620C00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80620C0C;
    }
}

loc_80620C04:
{
    r3 = r30;
    ctx->lr = 0x80620C0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80620DD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80620C0C:
{
    r0 = MemoryInline::FlatRead8((r30 + 21));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80620C14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80620C44;
    }
}

loc_80620C18:
{
    r31 = 0x809C0000u;
    r4 = 20;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r5 = 0;
    ctx->lr = 0x80620C2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = 0;
    r5 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635AC8u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 21), static_cast<uint8_t>(r0));
}

loc_80620C44:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80620B40 func_80620B40 preserves=true fpr_mask=0x00000000
