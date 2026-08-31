#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AE414(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807AE414;

loc_807AE414:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 704));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_807AE430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AE55C;
    }
}

loc_807AE434:
{
    r5 = 0;
    r4 = 6;
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r6 = 0x808D0000u;
    MemoryInline::FlatWrite16((r3 + 704), static_cast<uint16_t>(r5));
    r0 = (r0 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AE44C:
{
    MemoryInline::FlatWrite32((r3 + 712), r5);
    MemoryInline::FlatWrite32((r3 + 708), r4);
    r6 = (r6 + 9164);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AE47C;
    }
}

loc_807AE470:
{
    MemoryInline::FlatWrite32((r3 + 360), r5);
    MemoryInline::FlatWrite32((r3 + 364), r4);
    MemoryInline::FlatWrite32((r3 + 368), r0);
}

loc_807AE47C:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x807AE48Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079D920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 44), 0, 140u, true, false);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r31 + 180));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 44));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 48));
        }
    }
    f5.d = PpcFmulsInline(f2.d, f6.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r31 + 120));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 68));
    f3.d = PpcFmulsInline(f1.d, f6.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 52));
    r0 = (r0 & -9);
    r3 = (r0 | 64);
    f1.d = PpcFmulsInline(f0.d, f6.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 72));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 76));
    r0 = (r3 & 2097152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AE4C8:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 68), f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 72), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    MemoryInline::FlatWrite32((r31 + 120), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AE508;
    }
}

loc_807AE4E4:
{
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AE4EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AE508;
    }
}

loc_807AE4F0:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x807AE4FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079EE30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r31 + 124), r0);
}

loc_807AE508:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r4 = 16842752;
    r3 = MemoryInline::FlatRead32((r31 + 164));
    r4 = (r4 + 257);
    r0 = (r0 & -131073);
    MemoryInline::FlatWrite32((r31 + 120), r0);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 & ~r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AE540;
    }
}

loc_807AE52C:
{
    r3 = 0x809C0000u;
    r4 = (r31 + 68);
    r3 = MemoryInline::FlatRead32((r3 + 8656));
    r3 = MemoryInline::FlatRead32((r3 + 116));
    ctx->lr = 0x807AE540u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068D748u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807AE540:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r31 + 164));
    r3 = MemoryInline::FlatRead32((r3 + 6584));
    r5 = 1;
    r6 = 0;
    r7 = 23;
    ctx->lr = 0x807AE55Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805A906Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807AE55C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807AE414 func_807AE414 preserves=true fpr_mask=0x00000000
