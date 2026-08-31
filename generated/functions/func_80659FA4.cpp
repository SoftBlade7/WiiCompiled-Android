#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80659FA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80659FA4;

loc_80659FA4:
{
    r0 = (r4 * 12);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 9717));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80659FB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80659FC4;
    }
}

loc_80659FB8:
{
    r0 = MemoryInline::FlatRead8((r4 + 9716));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80659FC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80659FCC;
    }
}

loc_80659FC4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80659FCC:
{
    r5 = MemoryInline::FlatRead8((r4 + 9713));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80659FD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065A0AC;
    }
}

loc_80659FD8:
{
    r0 = (r5 + -11);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80659FE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8065A09C;
    }
}

loc_80659FE4:
{
    r0 = (r5 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80659FEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8065A09C;
    }
}

loc_80659FF0:
{
}

loc_80659FF4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(5))) {
        goto loc_8065A004;
    }
}

loc_80659FF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(8));
}

loc_80659FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065A050;
    }
}

loc_8065A000:
{
    goto loc_8065A0A4;
}

loc_8065A004:
{
    r0 = MemoryInline::FlatRead32((r3 + 10080));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065A00C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065A018;
    }
}

loc_8065A010:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8065A018:
{
    r0 = MemoryInline::FlatRead8((r4 + 9712));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8065A024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065A048;
    }
}

loc_8065A028:
{
    r4 = 0x80380000u;
    r3 = 7;
    r4 = MemoryInline::FlatRead32((r4 + 24576));
    r4 = MemoryInline::FlatRead32((r4 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8065A03C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8065A040:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8065A048:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8065A050:
{
    r0 = MemoryInline::FlatRead32((r3 + 10080));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065A058:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065A064;
    }
}

loc_8065A05C:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8065A064:
{
    r0 = MemoryInline::FlatRead8((r4 + 9712));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8065A070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065A094;
    }
}

loc_8065A074:
{
    r4 = 0x80380000u;
    r3 = 10;
    r4 = MemoryInline::FlatRead32((r4 + 24576));
    r4 = MemoryInline::FlatRead32((r4 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8065A088:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8065A08C:
{
    r3 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8065A094:
{
    r3 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8065A09C:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8065A0A4:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8065A0AC:
{
    r3 = 2;
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
// RECOMP_REGISTRATION base 0x80659FA4 func_80659FA4 preserves=true fpr_mask=0x00000000
