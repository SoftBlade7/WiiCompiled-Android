#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A139C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A139C;

loc_807A139C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = 0x808A0000u;
    r7 = MemoryInline::FlatRead32((r4 + 4));
    r6 = (r6 + 19964);
    r0 = (r0 * 60);
    r8 = 0;
}

loc_807A13B8:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r0 = (r6 + r0);
    r6 = 0;
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_0);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(9))) {
        goto loc_807A13E0;
    }
}

loc_807A13CC:
{
    r5 = MemoryInline::FlatRead16((r4 + 424));
    r6 = MemoryInline::FlatRead8((r4 + 472));
    r5 = (r5 + -2);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 134217727);
}

loc_807A13E0:
{
}

loc_807A13E4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(5))) {
        goto loc_807A13FC;
    }
}

loc_807A13E8:
{
    r5 = MemoryInline::FlatRead16((r4 + 704));
    r6 = MemoryInline::FlatRead8((r4 + 820));
    r5 = (r5 + -6);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r8 = (r8_rot_3 & 134217727);
}

loc_807A13FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_807A1400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A14CC;
    }
}

loc_807A1404:
{
}

loc_807A1408:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_807A1418;
    }
}

loc_807A140C:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 4);
}

loc_807A1414:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A1420;
    }
}

loc_807A1418:
{
    r0 = 0;
    goto loc_807A1424;
}

loc_807A1420:
{
    r0 = 2;
}

loc_807A1424:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead8((r5 + 14525));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807A1430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A14CC;
    }
}

loc_807A1434:
{
    r5 = MemoryInline::FlatRead32((r3 + 120));
    r5 = (r5 & 32768);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807A1448:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_807A14CC;
    }
}

loc_807A144C:
{
    r5 = MemoryInline::FlatRead32((r4 + 120));
    r5 = (r5 & 32768);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r5 = (r5_rot_2 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807A145C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A14CC;
    }
}

loc_807A1460:
{
    r4 = MemoryInline::FlatRead8((r4 + 108));
    if (((cr & 0x02000000u) != 0)) {
        goto loc_807A1470;
    }
}

loc_807A1468:
{
    r5 = MemoryInline::FlatRead8((r3 + 108));
    goto loc_807A1474;
}

loc_807A1470:
{
    r5 = 12;
}

loc_807A1474:
{
    r3 = 0x809C0000u;
    r6 = (r5 * 240);
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r5 + r6);
    r6 = MemoryInline::FlatRead32((r3 + 244));
}

loc_807A148C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(2))) {
        goto loc_807A1498;
    }
}

loc_807A1490:
{
    r3 = 0;
    goto loc_807A14C0;
}

loc_807A1498:
{
    r3 = (r4 * 240);
    r3 = (r5 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 244));
}

loc_807A14A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_807A14B4;
    }
}

loc_807A14AC:
{
    r3 = 0;
    goto loc_807A14C0;
}

loc_807A14B4:
{
    r3 = (r3 - r6);
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_807A14C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807A14C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A14CC;
    }
}

loc_807A14C8:
{
    r0 = 0;
}

loc_807A14CC:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A139C func_807A139C preserves=true fpr_mask=0x00000000
