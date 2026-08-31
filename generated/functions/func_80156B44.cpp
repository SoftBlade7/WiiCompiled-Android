#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80156B44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_80156B44;

loc_80156B44:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_80156B50:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80156B70;
    }
}

loc_80156B68:
{
    r31 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80156C24;
}

loc_80156B70:
{
    r31 = MemoryInline::FlatRead32((r5 + 4));
    goto loc_80156C24;
}

loc_80156B78:
{
    r30 = MemoryInline::FlatRead32(r31);
    goto loc_80156C18;
}

loc_80156B80:
{
    r3 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80156B88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80156BE0;
    }
}

loc_80156B8C:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 12);
}

loc_80156B98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80156BE0;
    }
}

loc_80156B9C:
{
    r30 = MemoryInline::FlatRead32((r30 + 8));
    goto loc_80156BD4;
}

loc_80156BA4:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80156BB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80156BD0;
    }
}

loc_80156BB4:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x80156BC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8015BBA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80156BC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80156BD0;
    }
}

loc_80156BC8:
{
    r3 = r31;
    goto loc_80156C30;
}

loc_80156BD0:
{
    r30 = MemoryInline::FlatRead32(r30);
}

loc_80156BD4:
{
}

loc_80156BD8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80156BA4;
    }
}

loc_80156BDC:
{
    goto loc_80156C20;
}

loc_80156BE0:
{
}

loc_80156BE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(3))) {
        goto loc_80156C14;
    }
}

loc_80156BE8:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80156BF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80156C14;
    }
}

loc_80156BF8:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x80156C04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8015BBA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80156C08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80156C14;
    }
}

loc_80156C0C:
{
    r3 = r31;
    goto loc_80156C30;
}

loc_80156C14:
{
    r30 = MemoryInline::FlatRead32(r30);
}

loc_80156C18:
{
}

loc_80156C1C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80156B80;
    }
}

loc_80156C20:
{
    r31 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80156C24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80156C28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80156B78;
    }
}

loc_80156C2C:
{
    r3 = 0;
}

loc_80156C30:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80156B44 func_80156B44 preserves=true fpr_mask=0x00000000
