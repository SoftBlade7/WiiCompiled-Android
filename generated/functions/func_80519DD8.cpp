#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80519DD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80519DD8;

loc_80519DD8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -944), 0, 952u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -944), r1);
    r1 = (r1 + -944);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 948u, (r1 + 948), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 920u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 920u, (r1 + 920), r26);
        MemoryInline::WriteResolved32(guest_range_0, 924u, (r1 + 924), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 928u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 928u, (r1 + 928), r28);
        MemoryInline::WriteResolved32(guest_range_0, 932u, (r1 + 932), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 936u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 936u, (r1 + 936), r30);
        MemoryInline::WriteResolved32(guest_range_0, 940u, (r1 + 940), r31);
    }
    r30 = 0x808B0000u;
    r30 = (r30 + 11400);
    r28 = r3;
    r29 = r4;
    r26 = r5;
    r3 = (r1 + 472);
    r4 = 0;
    r5 = 448;
    MemoryInline::WriteResolved32(guest_range_0, 464u, (r1 + 464), r30);
    ctx->lr = 0x80519E10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r3 = (r1 + 16);
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x80519E24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = (r26 * 448);
    r4 = (r28 + r30);
    r0 = MemoryInline::FlatRead16((r4 + 24));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80519E34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80519E50;
    }
}

loc_80519E38:
{
    r3 = (r1 + 16);
    r4 = (r4 + 8);
    r5 = 448;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = 1;
    goto loc_80519E54;
}

loc_80519E50:
{
    r27 = 0;
}

loc_80519E54:
{
    r31 = (r29 * 448);
    r4 = (r28 + r31);
    r0 = MemoryInline::FlatRead16((r4 + 24));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80519E64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80519E80;
    }
}

loc_80519E68:
{
    r3 = (r1 + 472);
    r4 = (r4 + 8);
    r5 = 448;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r26 = 1;
    goto loc_80519E84;
}

loc_80519E80:
{
    r26 = 0;
}

loc_80519E84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80519E88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519EC0;
    }
}

loc_80519E8C:
{
    r3 = (r28 + r30);
    r4 = 0;
    r3 = (r3 + 8);
    r5 = 448;
    ctx->lr = 0x80519EA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80519EA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519FA4;
    }
}

loc_80519EA8:
{
    r3 = (r28 + r31);
    r4 = 0;
    r3 = (r3 + 8);
    r5 = 448;
    ctx->lr = 0x80519EBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80519FA4;
}

loc_80519EC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80519EC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519F00;
    }
}

loc_80519EC8:
{
    r4 = (r28 + r31);
    r3 = (r28 + r30);
    r26 = (r4 + 8);
    r5 = 448;
    r4 = r26;
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r28 + r30);
    r3 = r26;
    MemoryInline::FlatWrite8((r4 + 110), static_cast<uint8_t>(r29));
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x80519EFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80519FA4;
}

loc_80519F00:
{
    r3 = MemoryInline::FlatRead16((r1 + 488));
    r0 = (r3 & 1);
}

loc_80519F08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80519F14;
    }
}

loc_80519F0C:
{
    r0 = 0;
    goto loc_80519F24;
}

loc_80519F14:
{
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80519F18:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80519F24;
    }
}

loc_80519F20:
{
    r0 = 1;
}

loc_80519F24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80519F28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80519F90;
    }
}

loc_80519F2C:
{
    r3 = MemoryInline::FlatRead16((r1 + 32));
    r0 = (r3 & 1);
}

loc_80519F34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80519F40;
    }
}

loc_80519F38:
{
    r0 = 0;
    goto loc_80519F50;
}

loc_80519F40:
{
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80519F44:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80519F50;
    }
}

loc_80519F4C:
{
    r0 = 1;
}

loc_80519F50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80519F54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519F90;
    }
}

loc_80519F58:
{
    r4 = (r28 + r31);
    r3 = (r28 + r30);
    r26 = (r4 + 8);
    r5 = 448;
    r4 = r26;
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r28 + r30);
    r3 = r26;
    MemoryInline::FlatWrite8((r4 + 110), static_cast<uint8_t>(r29));
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x80519F8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80519FA4;
}

loc_80519F90:
{
    r3 = (r28 + r30);
    r4 = 0;
    r3 = (r3 + 8);
    r5 = 448;
    ctx->lr = 0x80519FA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80519FA4:
{
    r26 = MemoryInline::FlatRead32((r1 + 920));
    r27 = MemoryInline::FlatRead32((r1 + 924));
    r28 = MemoryInline::FlatRead32((r1 + 928));
    r29 = MemoryInline::FlatRead32((r1 + 932));
    r30 = MemoryInline::FlatRead32((r1 + 936));
    r31 = MemoryInline::FlatRead32((r1 + 940));
    r0 = MemoryInline::FlatRead32((r1 + 948));
    ctx->lr = r0;
    r1 = (r1 + 944);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0000FB gpr_write=0xFC0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80519DD8 func_80519DD8 preserves=true fpr_mask=0x00000000
