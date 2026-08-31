#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80669108(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80669108;

loc_80669108:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -960), 0, 968u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -960), r1);
    r1 = (r1 + -960);
    r0 = ctx->lr;
    r3 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_0, 964u, (r1 + 964), r0);
    r3 = (r3 + 11400);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 940u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 940u, (r1 + 940), r27);
        MemoryInline::WriteResolved32(guest_range_0, 944u, (r1 + 944), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 948u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 948u, (r1 + 948), r29);
        MemoryInline::WriteResolved32(guest_range_0, 952u, (r1 + 952), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 956u, (r1 + 956), r31);
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r4 = 0;
    r5 = 448;
    MemoryInline::WriteResolved32(guest_range_0, 472u, (r1 + 472), r3);
    r3 = (r1 + 480);
    ctx->lr = 0x80669140u;
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
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = 0;
}

loc_80669144:
{
    r0 = (r31 & 65535);
    r3 = (r1 + 472);
    r0 = (r0 * 448);
    r4 = (r27 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x8066915Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80669160:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80669194;
    }
}

loc_80669164:
{
    r3 = (r1 + 8);
    r4 = (r1 + 480);
    r5 = 8;
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
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r28;
    r4 = (r1 + 8);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80669188:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80669194;
    }
}

loc_8066918C:
{
    r0 = 1;
    goto loc_806691A4;
}

loc_80669194:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(30));
}

loc_8066919C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80669144;
    }
}

loc_806691A0:
{
    r0 = 0;
}

loc_806691A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806691A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806691B4;
    }
}

loc_806691AC:
{
    r3 = 0;
    goto loc_80669250;
}

loc_806691B4:
{
    r4 = 0x808B0000u;
    r3 = (r1 + 24);
    r4 = (r4 + 11400);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x806691D0u;
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
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = 0;
}

loc_806691D4:
{
    r0 = (r31 & 65535);
    r3 = (r1 + 16);
    r0 = (r0 * 448);
    r4 = (r27 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x806691ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806691F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80669200;
    }
}

loc_806691F4:
{
    r30 = (r31 & 65535);
    r0 = 1;
    goto loc_80669210;
}

loc_80669200:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(30));
}

loc_80669208:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806691D4;
    }
}

loc_8066920C:
{
    r0 = 0;
}

loc_80669210:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80669214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066924C;
    }
}

loc_80669218:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8066921C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669244;
    }
}

loc_80669220:
{
    r5 = r28;
    r3 = (r1 + 472);
    r4 = (r30 & 255);
    ctx->lr = 0x80669230u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80519704u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r30 * 448);
    r3 = (r1 + 472);
    r4 = (r27 + r0);
    r4 = (r4 + 22992);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80669244:
{
    r3 = 1;
    goto loc_80669250;
}

loc_8066924C:
{
    r3 = 2;
}

loc_80669250:
{
    r27 = MemoryInline::FlatRead32((r1 + 940));
    r28 = MemoryInline::FlatRead32((r1 + 944));
    r29 = MemoryInline::FlatRead32((r1 + 948));
    r30 = MemoryInline::FlatRead32((r1 + 952));
    r31 = MemoryInline::FlatRead32((r1 + 956));
    r0 = MemoryInline::FlatRead32((r1 + 964));
    ctx->lr = r0;
    r1 = (r1 + 960);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FB gpr_write=0xF80000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80669108 func_80669108 preserves=true fpr_mask=0x00000000
