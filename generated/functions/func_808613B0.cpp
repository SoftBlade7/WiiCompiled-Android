#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808613B0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_808613B0;

loc_808613B0:
{
    r3 = 4;
    r4 = 0;
    ctx->lr = 0x808613BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054FED8u>(ctx);
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

loc_808613C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808613CC;
    }
}

loc_808613C4:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808613CC:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808613DC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808613FC;
    }
}

loc_808613E0:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80861400;
}

loc_808613FC:
{
    r3 = 0;
}

loc_80861400:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 118), 0, 350u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 118));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861408:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861418;
    }
}

loc_8086140C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r3 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861414:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861420;
    }
}

loc_80861418:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861420:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 112u, (r3 + 230));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861438;
    }
}

loc_8086142C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 122u, (r3 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861434:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861440;
    }
}

loc_80861438:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861440:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 224u, (r3 + 342));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861448:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861458;
    }
}

loc_8086144C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 234u, (r3 + 352));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861454:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861460;
    }
}

loc_80861458:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861460:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 336u, (r3 + 454));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861478;
    }
}

loc_8086146C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 346u, (r3 + 464));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861474:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861480;
    }
}

loc_80861478:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861480:
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
// RECOMP_REGISTRATION base 0x808613B0 func_808613B0 preserves=true fpr_mask=0x00000000
