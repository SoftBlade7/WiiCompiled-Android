#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80844ABC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80844ABC;

loc_80844ABC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1736), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 1736));
    r4 = 0;
}

loc_80844AC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844AD0;
    }
}

loc_80844ACC:
{
    r4 = 1;
}

loc_80844AD0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1737));
}

loc_80844AD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844AE0;
    }
}

loc_80844ADC:
{
    r4 = (r4 + 1);
}

loc_80844AE0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 1738));
}

loc_80844AE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844AF0;
    }
}

loc_80844AEC:
{
    r4 = (r4 + 1);
}

loc_80844AF0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 1739));
}

loc_80844AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844B00;
    }
}

loc_80844AFC:
{
    r4 = (r4 + 1);
}

loc_80844B00:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 1740));
}

loc_80844B08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844B10;
    }
}

loc_80844B0C:
{
    r4 = (r4 + 1);
}

loc_80844B10:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 1741));
}

loc_80844B18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844B20;
    }
}

loc_80844B1C:
{
    r4 = (r4 + 1);
}

loc_80844B20:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 1742));
    r6 = 0;
}

loc_80844B2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844B34;
    }
}

loc_80844B30:
{
    r6 = 1;
}

loc_80844B34:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 1743));
}

loc_80844B3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844B44;
    }
}

loc_80844B40:
{
    r6 = (r6 + 1);
}

loc_80844B44:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 1744));
}

loc_80844B4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844B54;
    }
}

loc_80844B50:
{
    r6 = (r6 + 1);
}

loc_80844B54:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 1745));
}

loc_80844B5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844B64;
    }
}

loc_80844B60:
{
    r6 = (r6 + 1);
}

loc_80844B64:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 1746));
}

loc_80844B6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844B74;
    }
}

loc_80844B70:
{
    r6 = (r6 + 1);
}

loc_80844B74:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 1747));
}

loc_80844B7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844B84;
    }
}

loc_80844B80:
{
    r6 = (r6 + 1);
}

loc_80844B84:
{
}

loc_80844B88:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r6))) {
        goto loc_80844B90;
    }
}

loc_80844B8C:
{
    r6 = r4;
}

loc_80844B90:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 1748));
    r4 = 0;
}

loc_80844B9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844BA4;
    }
}

loc_80844BA0:
{
    r4 = 1;
}

loc_80844BA4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 1749));
}

loc_80844BAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844BB4;
    }
}

loc_80844BB0:
{
    r4 = (r4 + 1);
}

loc_80844BB4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 1750));
}

loc_80844BBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844BC4;
    }
}

loc_80844BC0:
{
    r4 = (r4 + 1);
}

loc_80844BC4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 1751));
}

loc_80844BCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844BD4;
    }
}

loc_80844BD0:
{
    r4 = (r4 + 1);
}

loc_80844BD4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 1752));
}

loc_80844BDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844BE4;
    }
}

loc_80844BE0:
{
    r4 = (r4 + 1);
}

loc_80844BE4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 1753));
}

loc_80844BEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844BF4;
    }
}

loc_80844BF0:
{
    r4 = (r4 + 1);
}

loc_80844BF4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 1754));
    r7 = 0;
}

loc_80844C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844C08;
    }
}

loc_80844C04:
{
    r7 = 1;
}

loc_80844C08:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r3 + 1755));
}

loc_80844C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844C18;
    }
}

loc_80844C14:
{
    r7 = (r7 + 1);
}

loc_80844C18:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 1756));
}

loc_80844C20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844C28;
    }
}

loc_80844C24:
{
    r7 = (r7 + 1);
}

loc_80844C28:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 1757));
}

loc_80844C30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844C38;
    }
}

loc_80844C34:
{
    r7 = (r7 + 1);
}

loc_80844C38:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r3 + 1758));
}

loc_80844C40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844C48;
    }
}

loc_80844C44:
{
    r7 = (r7 + 1);
}

loc_80844C48:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r3 + 1759));
}

loc_80844C50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844C58;
    }
}

loc_80844C54:
{
    r7 = (r7 + 1);
}

loc_80844C58:
{
}

loc_80844C5C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r7))) {
        goto loc_80844C64;
    }
}

loc_80844C60:
{
    r7 = r4;
}

loc_80844C64:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r3 + 1760));
    r5 = 0;
}

loc_80844C70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844C78;
    }
}

loc_80844C74:
{
    r5 = 1;
}

loc_80844C78:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r3 + 1761));
}

loc_80844C80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844C88;
    }
}

loc_80844C84:
{
    r5 = (r5 + 1);
}

loc_80844C88:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r3 + 1762));
}

loc_80844C90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844C98;
    }
}

loc_80844C94:
{
    r5 = (r5 + 1);
}

loc_80844C98:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r3 + 1763));
}

loc_80844CA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844CA8;
    }
}

loc_80844CA4:
{
    r5 = (r5 + 1);
}

loc_80844CA8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r3 + 1764));
}

loc_80844CB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844CB8;
    }
}

loc_80844CB4:
{
    r5 = (r5 + 1);
}

loc_80844CB8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r3 + 1765));
}

loc_80844CC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844CC8;
    }
}

loc_80844CC4:
{
    r5 = (r5 + 1);
}

loc_80844CC8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r3 + 1766));
    r4 = 0;
}

loc_80844CD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844CDC;
    }
}

loc_80844CD8:
{
    r4 = 1;
}

loc_80844CDC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r3 + 1767));
}

loc_80844CE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844CEC;
    }
}

loc_80844CE8:
{
    r4 = (r4 + 1);
}

loc_80844CEC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 32u, (r3 + 1768));
}

loc_80844CF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844CFC;
    }
}

loc_80844CF8:
{
    r4 = (r4 + 1);
}

loc_80844CFC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 33u, (r3 + 1769));
}

loc_80844D04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844D0C;
    }
}

loc_80844D08:
{
    r4 = (r4 + 1);
}

loc_80844D0C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 34u, (r3 + 1770));
}

loc_80844D14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844D1C;
    }
}

loc_80844D18:
{
    r4 = (r4 + 1);
}

loc_80844D1C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 35u, (r3 + 1771));
}

loc_80844D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844D2C;
    }
}

loc_80844D28:
{
    r4 = (r4 + 1);
}

loc_80844D2C:
{
}

loc_80844D30:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r4))) {
        goto loc_80844D38;
    }
}

loc_80844D34:
{
    r4 = r5;
}

loc_80844D38:
{
}

loc_80844D3C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r7))) {
        goto loc_80844D54;
    }
}

loc_80844D40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r4));
}

loc_80844D44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80844D4C;
    }
}

loc_80844D48:
{
    r4 = r6;
}

loc_80844D4C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80844D54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r4));
}

loc_80844D58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80844D60;
    }
}

loc_80844D5C:
{
    r4 = r7;
}

loc_80844D60:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80844ABC func_80844ABC preserves=true fpr_mask=0x00000000
