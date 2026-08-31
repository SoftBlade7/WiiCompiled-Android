#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80062480(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80062480;

loc_80062480:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80062488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8006248C:
{
    r4 = 0x802C0000u;
    r4 = MemoryInline::FlatRead8((r4 + -32704));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800624A0;
    }
}

loc_80062498:
{
    r0 = MemoryInline::FlatRead8(r3);
    goto loc_800624A4;
}

loc_800624A0:
{
    r0 = 0;
}

loc_800624A4:
{
}

loc_800624A8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800624D8;
    }
}

loc_800624AC:
{
}

loc_800624B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800624BC;
    }
}

loc_800624B4:
{
    r0 = MemoryInline::FlatRead8(r3);
    goto loc_800624C0;
}

loc_800624BC:
{
    r0 = 0;
}

loc_800624C0:
{
    r5 = 0x802C0000u;
    r4 = (r5 + -32704);
    MemoryInline::FlatWriteRam8((r5 + -32704), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -4);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
}

loc_800624D8:
{
    r4 = 0x802C0000u;
}

loc_800624E0:
{
    r4 = (r4 + -32704);
    r4 = MemoryInline::FlatRead8((r4 + 1));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800624F4;
    }
}

loc_800624EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_800624F8;
}

loc_800624F4:
{
    r0 = 0;
}

loc_800624F8:
{
}

loc_800624FC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8006252C;
    }
}

loc_80062500:
{
}

loc_80062504:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80062510;
    }
}

loc_80062508:
{
    r5 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_80062514;
}

loc_80062510:
{
    r5 = 0;
}

loc_80062514:
{
    r4 = 0x802C0000u;
    r4 = (r4 + -32704);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam8((r4 + 1), static_cast<uint8_t>(r5));
    r0 = (r0 & -4);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
}

loc_8006252C:
{
    r4 = 0x802C0000u;
}

loc_80062534:
{
    r4 = (r4 + -32704);
    r4 = MemoryInline::FlatRead8((r4 + 2));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80062548;
    }
}

loc_80062540:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    goto loc_8006254C;
}

loc_80062548:
{
    r0 = 0;
}

loc_8006254C:
{
}

loc_80062550:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_80062580;
    }
}

loc_80062554:
{
}

loc_80062558:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80062564;
    }
}

loc_8006255C:
{
    r5 = MemoryInline::FlatRead8((r3 + 2));
    goto loc_80062568;
}

loc_80062564:
{
    r5 = 0;
}

loc_80062568:
{
    r4 = 0x802C0000u;
    r4 = (r4 + -32704);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam8((r4 + 2), static_cast<uint8_t>(r5));
    r0 = (r0 & -2);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
}

loc_80062580:
{
    r4 = 0x802C0000u;
}

loc_80062588:
{
    r4 = (r4 + -32704);
    r4 = MemoryInline::FlatRead8((r4 + 3));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006259C;
    }
}

loc_80062594:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_800625A0;
}

loc_8006259C:
{
    r0 = 0;
}

loc_800625A0:
{
}

loc_800625A4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800625D4;
    }
}

loc_800625A8:
{
}

loc_800625AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800625B8;
    }
}

loc_800625B0:
{
    r5 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_800625BC;
}

loc_800625B8:
{
    r5 = 0;
}

loc_800625BC:
{
    r4 = 0x802C0000u;
    r4 = (r4 + -32704);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam8((r4 + 3), static_cast<uint8_t>(r5));
    r0 = (r0 & -2);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
}

loc_800625D4:
{
}

loc_800625D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800625E4;
    }
}

loc_800625DC:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_800625E8;
}

loc_800625E4:
{
    r5 = 3;
}

loc_800625E8:
{
    r4 = 0x802C0000u;
    r4 = (r4 + -32704);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800625F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r5))) {
        goto loc_80062628;
    }
}

loc_800625FC:
{
}

loc_80062600:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006260C;
    }
}

loc_80062604:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_80062610;
}

loc_8006260C:
{
    r4 = 3;
}

loc_80062610:
{
    r3 = 0x802C0000u;
    r3 = (r3 + -32704);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    r0 = (r0 & -2);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
}

loc_80062628:
{
    r4 = 0x802C0000u;
    r4 = (r4 + -32704);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80062638:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8006263C:
{
    r0 = (r3 & -4);
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80062480 func_80062480 preserves=true fpr_mask=0x00000000
