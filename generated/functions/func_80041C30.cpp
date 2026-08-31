#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80041C30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80041C30;

loc_80041C30:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 181u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 152u, (r3 + 200));
    r4 = MemoryInline::FlatRead32((r6 + 36));
    r0 = MemoryInline::FlatRead16((r4 + 156));
    r0 = (r0 & 24576);
}

loc_80041C48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16384))) {
        goto loc_80041C60;
    }
}

loc_80041C4C:
{
}

loc_80041C50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8192))) {
        goto loc_80041C70;
    }
}

loc_80041C54:
{
}

loc_80041C58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24576))) {
        goto loc_80041C80;
    }
}

loc_80041C5C:
{
    goto loc_80041C90;
}

loc_80041C60:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 52));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 56));
        }
    }
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80041C9C;
}

loc_80041C70:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 60));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80041C9C;
}

loc_80041C80:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 56));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80041C9C;
}

loc_80041C90:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 52));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 60));
    f3.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80041C9C:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 180u, (r3 + 228));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_80041CA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80041CF4;
    }
}

loc_80041CA8:
{
    r5 = MemoryInline::FlatRead8((r6 + 137));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_80041CB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80041CF4;
    }
}

loc_80041CB4:
{
    r3 = MemoryInline::FlatRead8((r6 + 138));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30136));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30152));
    r0 = (r0 * r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
}

loc_80041CF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 92));
    f1.d = PpcFmulsInline(f3.d, f0.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80041C30 func_80041C30 preserves=true fpr_mask=0x00000000
