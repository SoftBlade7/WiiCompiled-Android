#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80077F10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80077F10;

loc_80077F10:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r5);
    r28 = r4;
    r27 = r3;
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead16(r3);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
}

loc_80077F40:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_80077F48;
    }
}

loc_80077F44:
{
    r4 = (r1 + 12);
}

loc_80077F48:
{
    r0 = MemoryInline::FlatRead32(r4);
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r31 = 0;
    goto loc_8007800C;
}

loc_80077F5C:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r30 = (r0 + r31);
    r31_addr_2 = (r31 + r0);
    r0 = MemoryInline::FlatRead32(r31_addr_2);
    r0 = (r0 & 4);
}

loc_80077F6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078004;
    }
}

loc_80077F70:
{
    r3 = (r30 + 4);
    r4 = (r1 + 16);
    r5 = (r1 + 20);
    r6 = (r1 + 24);
    // inline leaf 0x801701E0 (10 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32(r4, f2.d);
    MemoryInline::FlatWriteRamFloat32(r5, f1.d);
    MemoryInline::FlatWriteRamFloat32(r6, f0.d);
    // end of inlined leaf 0x801701E0
    r3 = (r1 + 16);
    r4 = r28;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80085AB0u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80077F9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80077FB8;
    }
}

loc_80077FA0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = (r30 + 4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    ctx->lr = 0x80077FB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80170208u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80078004;
}

loc_80077FB8:
{
    r3 = (r30 + 4);
    r4 = (r1 + 28);
    r5 = (r1 + 32);
    r6 = (r1 + 36);
    // inline leaf 0x801701A8 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    MemoryInline::FlatWriteRamFloat32(r5, f1.d);
    MemoryInline::FlatWriteRamFloat32(r6, f0.d);
    // end of inlined leaf 0x801701A8
    r4 = (r1 + 28);
    r3 = r28;
    r5 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8019A91Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r3 = (r30 + 4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 36));
    // inline leaf 0x80170198 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f3.d);
    // end of inlined leaf 0x80170198
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = (r30 + 4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    // inline leaf 0x801701C4 (7 guest instruction(s))
    f4.d = (-(f1.d));
    f1.d = (-(f2.d));
    f0.d = (-(f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 52), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    // end of inlined leaf 0x801701C4
}

loc_80078004:
{
    r31 = (r31 + 68);
    r29 = (r29 + 1);
}

loc_8007800C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
}

loc_80078014:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80077F5C;
    }
}

loc_80078018:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8003FFF gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0xFC00105F fpr_write=0xFC001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80077F10 func_80077F10 preserves=true fpr_mask=0x00000000
